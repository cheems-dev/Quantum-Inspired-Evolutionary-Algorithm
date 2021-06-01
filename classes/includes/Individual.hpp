#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP
#include "Fitness.hpp"

template <typename T>
class Individual : public Fitness
{
  T array[];

public:
  Individual(T[]);
  float isSorted();
};

#endif