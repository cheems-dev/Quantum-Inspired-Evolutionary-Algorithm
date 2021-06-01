#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP
#include <iostream>
#include <vector>
#include "Fitness.hpp"

template <typename T>
class Individual : public Fitness
{
private:
  std::vector<T> array;
  // Shuffle añadido temporalmente
  void shuffle();

public:
  Individual(std::vector<T> &);
  std::vector<T> getArray();
  bool is_sorted();
  void bogo_sort();
  void print(bool);
  void print_details(int, double);
};

#endif