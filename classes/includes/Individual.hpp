#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP
#include <iostream>
#include <vector>
#include "Fitness.hpp"

template <typename T>
class Individual : public Fitness
{
  const std::vector<T> array;

public:
  Individual(const std::vector<T> &);
  bool is_sorted();
  void bogo_sort();
  void print();

private:
  // Shuffle añadido temporalmente
  void shuffle();
};

#endif