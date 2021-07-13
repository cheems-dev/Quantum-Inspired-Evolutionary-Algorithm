#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP
#include <vector>
#include <iostream>

class Individual
{
private:
  std::vector<std::vector<int>> population;
  int lower, upper;

public:
  Individual();
  Individual(const int, const int, const int);
  std::vector<std::vector<int>> generate_population(const int);
  void print_population();
  int size();
  void add(std::vector<int>);
  std::vector<int> index(int i);
};
#endif
