#include "./includes/Genetic.hpp"
#include "./Individual.cpp"
#include "../functions/generate_percent.cpp"
#include "./Operations.cpp"

Genetic::Genetic(int NUMBER_INDIVIDUAL, int TARGET, int LOWER_RANGE, int UPPER_RANGE)
{
  this->population = Individual(NUMBER_INDIVIDUAL, LOWER_RANGE, UPPER_RANGE);
  this->target = TARGET;
}

void Genetic::run()
{
  int result = 0, i = population.size() - 1, ages = 0;
  while (result != this->target)
  {
    population.add((generate_percent(1) > .5) ? operations.cross_over(population.index(i), population.index(i - 1)) : operations.mutate(population.index(i)));
    i = population.size() - 1; // actualizamos el tamaño de nuetra problacion
    result = operations.fitness(population.index(i), this->target);
    std::cout << "Generacion " << ages++ << std::endl;
    operations.print(population.index(i), result);
  }
}