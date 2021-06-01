#include "./includes/Individual.hpp"

template <typename T>
Individual<T>::Individual(std::vector<T> const &_array)
{
  array = _array;
}

template <typename T>
float Individual<T>::isSorted()
{
  return 0.01;
}

template <typename T>
void Individual<T>::print()
{
  for (auto it = array.begin(); it != array.end(); it++)
    std::cout << *it << " ";
  std::cout << "\n";
}