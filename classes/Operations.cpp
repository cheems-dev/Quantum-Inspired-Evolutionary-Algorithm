#include "./includes/Operations.hpp"
#include "../functions/generate_number_ramdon.cpp"

std::vector<int> Operations::cross_over(std::vector<int> parent_01, std::vector<int> parent_02)
{
  std::vector<int> child = {};
  for (size_t i = 0; i < parent_01.size(); i++)
    child.push_back((i % 2 == 0) ? parent_01[i] : parent_02[i]);
  return child;
}

std::vector<int> Operations::mutate(std::vector<int> parent)
{
  std::vector<int> child = parent;
  child[generate_number_ramdon(0, parent.size() - 1)] = generate_number_ramdon(0, parent.size() - 1);
  return child;
}

int Operations::fitness(std::vector<int> individual, int target)
{
  int add = 0;
  for (size_t i = 0; i < individual.size(); i++)
    add += individual[i];
  return abs(add - target); // valor absoluto
}

void Operations::print(std::vector<int> population, int fitness = 0)
{
  for (size_t i = 0; i < population.size(); i++)
    std::cout << population[i] << " ";
  (fitness) ? std::cout << " Fitness: " << fitness << std::endl : std::cout << std::endl;
}