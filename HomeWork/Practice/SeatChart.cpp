#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cassert>
#include <stdexcept>


bool Is_Super_fan(std::vector<std::vector<int>> const & super_fan_coordinates, int x, int y) {
  for (std::vector<int> const & super_fan_coordinate : super_fan_coordinates) {
    if (super_fan_coordinate.at(0) == x && super_fan_coordinate.at(1) == y) {
      return true;
    }
  }
  return false;
}

void Print_Seats(std::vector<std::vector<int>> const & seats, std::vector<std::vector<int>> const & super_fan_coordinates) {
  for (int y = static_cast<int>(seats.at(0).size()) - 1; y >= 0; --y) {
    for (int x = 0; x < static_cast<int>(seats.size()); ++x) {
      std::cout << std::setw(4);
      if (Is_Super_fan(super_fan_coordinates, x, y)) {
        std::cout << "*";
      } else {
        std::cout << seats.at(x).at(y);
      }
      std::cout << ',';
    }
    std::cout << std::endl;
  }
}

std::vector<std::vector<int>> Get_Super_Fans() {
  std::vector<std::vector<int>> super_fan_coordinates;
  char parenthesis;
  while (std::cin >> parenthesis) {
    char comma;
    int x, y;
    assert(parenthesis == '(');
    std::cin >> x >> comma;
    assert(comma == ',');
    std::cin >> y >> parenthesis;
    assert(parenthesis == ')');
    std::vector<int> super_fan_coordinate{x, y};
    super_fan_coordinates.push_back({x,y});
  }
  return super_fan_coordinates;
}

std::vector<std::vector<int>> Create_Seats_Zeroed() {
  int const width = 20;
  int const height = 10;
  std::vector<std::vector<int>> seats;
  for (int x = 0; x < width; ++x) {
    std::vector<int> column;
    for (int y = 0; y < height; ++y) {
      column.push_back(0);
    }
    seats.push_back(column);
  }
  return seats;
}

void Apply_Initial_Ranking_From_Stage(std::vector<std::vector<int>> & seats) {
  int const stage_side_ranking = 100;
  int const ranking_dropoff_from_stage = 5;
  for (int x = 0; x < static_cast<int>(seats.size()); ++x) {
    for (int y = 0; y < static_cast<int>(seats.at(0).size()); ++y) {
      seats.at(x).at(y) += stage_side_ranking - (y * ranking_dropoff_from_stage);
    }
  }
}

void Reduce_Ranking(std::vector<std::vector<int>> & seats, int x, int y, int reduction) {
  try {
    seats.at(x).at(y) -= reduction;
  } catch (std::out_of_range & e) {
    // Do Nothing
  }
}

void Apply_Super_Fan_Ranking_Reduction(std::vector<std::vector<int>> & seats, std::vector<std::vector<int>> const & super_fan_coordinates) {
  int const distance_1_reduction = 40;
  int const distance_2_reduction = 20;
  for (std::vector<int> const & super_fan_coordinate : super_fan_coordinates) {
    int x = super_fan_coordinate.at(0);
    int y = super_fan_coordinate.at(1);
    Reduce_Ranking(seats, x - 1, y, distance_1_reduction);
    Reduce_Ranking(seats, x + 1, y, distance_1_reduction);
    Reduce_Ranking(seats, x, y - 1, distance_1_reduction);
    Reduce_Ranking(seats, x, y + 1, distance_1_reduction);
    Reduce_Ranking(seats, x - 2, y, distance_2_reduction);
    Reduce_Ranking(seats, x + 2, y, distance_2_reduction);
    Reduce_Ranking(seats, x, y - 2, distance_2_reduction);
    Reduce_Ranking(seats, x, y + 2, distance_2_reduction);
    Reduce_Ranking(seats, x - 1, y - 1, distance_2_reduction);
    Reduce_Ranking(seats, x + 1, y - 1, distance_2_reduction);
    Reduce_Ranking(seats, x - 1, y + 1, distance_2_reduction);
    Reduce_Ranking(seats, x + 1, y + 1, distance_2_reduction);
  }
}

int main() {
  std::vector<std::vector<int>> const super_fan_coordinates = Get_Super_Fans();
  std::vector<std::vector<int>> seats = Create_Seats_Zeroed();
  Apply_Initial_Ranking_From_Stage(seats);
  Apply_Super_Fan_Ranking_Reduction(seats, super_fan_coordinates);
  Print_Seats(seats, super_fan_coordinates);

  return 0;
}
