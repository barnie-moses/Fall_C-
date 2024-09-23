#pragma once

#include <iostream>

struct Node {
  char data_;
  Node *next_;

  Node() : data_(0), next_(nullptr){};
  Node(int d) : data_(d), next_(nullptr){};
};

class SingleLink {
 public:
  Node *head_;
  SingleLink() : head_(nullptr){};
  void AppendBack(char);
  void FrontBack(); // TODO
};

std::ostream &operator<<(std::ostream &, SingleLink const &);

/*

SingleLink s;
s.AppendBack('a');
s.AppendBack('b');
s.AppendBack('c');
s.AppendBack('b');
std::ostringstream oss;
oss << s;
CHECK(oss.str() ==  "a, b, c, b");
oss.str("");

s.Replace('b', 'X');
oss << s;
CHECK(oss.str() ==  "a, X, c, X");
oss.str("");
*/