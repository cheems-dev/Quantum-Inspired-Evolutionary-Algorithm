#include "./includes/Individual.hpp"
#include "../functions/generate_number_ramdon.cpp"
#include <vector>

Individual::Individual()
{
}

Individual::Individual(int size, int lower_range, int upper_range)
{
  this->population = generate_population(size);
  this->lower = lower_range;
  this->upper = upper_range;
}

std::vector<std::vector<int>> Individual::generate_population(const int size)
{
  std::vector<int> individual = {};
  std::vector<std::vector<int>> population = {};
  for (size_t i = 0; i < 2; i++)
  {
    individual = {};
    for (size_t j = 0; j < size; j++)
      individual.push_back(generate_number_ramdon(this->lower, this->upper));
    population.push_back(individual);
  }
  return population;
}

void Individual::print_population()
{
  for (size_t i = 0; i < this->population.size(); i++)
  {
    for (size_t j = 0; j < this->population[i].size(); j++)
      std::cout << population[i][j] << " ";
    std::cout << "\n";
  }
}

int Individual::size()
{
  return this->population.size();
}

void Individual::add(std::vector<int> child)
{
  this->population.push_back(child);
}

std::vector<int> Individual::index(int i)
{
  return this->population[i];
}