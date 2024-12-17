#pragma once

#include <vector>
#include <set>

class ForgetfulVector {
  std::set<int> seen;
  std::vector<int> data;
 public:
  void push_back(int);
  int & at(int);
  int size();
};
