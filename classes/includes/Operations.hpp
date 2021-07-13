#ifndef OPERATIONS_HPP
#define OPERATIONS_HPP

#include <vector>

class Operations
{

public:
  std::vector<int> cross_over(std::vector<int>, std::vector<int>);
  std::vector<int> mutate(std::vector<int>);
  int fitness(std::vector<int>, int);
  void print(std::vector<int>, int);
};

#endif