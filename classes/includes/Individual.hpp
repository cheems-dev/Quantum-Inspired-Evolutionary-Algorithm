#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP
#include "Fitness.hpp"
#include <vector>

template <typename T>
class Individual : public Fitness
{
  std::vector<T> array;

public:
  Individual(std::vector<T> const &);
  float isSorted();
  void print();
};

#endif