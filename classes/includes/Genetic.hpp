#ifndef GENETIC_HPP
#define GENETIC_HPP

#include "Individual.hpp"
#include "Operations.hpp"
class Genetic
{
  Individual population;
  int target;
  Operations operations;

public:
  Genetic(int, int, int, int);
  void run();
};

#endif