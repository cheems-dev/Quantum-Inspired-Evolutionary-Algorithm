#include "./includes/Individual.hpp"

template <typename T>
Individual<T>::Individual(std::vector<T> &_array)
{
  array = _array;
  copy_array = _array;
  std::sort(copy_array.begin(), copy_array.end());
}

template <typename T>
std::vector<T> Individual<T>::getArray()
{
  return array;
}

template <typename T>
bool Individual<T>::is_sorted()
{
  int fitness{1};
  for (int i = 1, n = array.size(); i < n; i++)
  {
    if (array[i] == copy_array[i])
      fitness++;
  }
  print_details(fitness, fitness * 100 / array.size());

  return (fitness == array.size()) ? true : false;
}

template <typename T>
void Individual<T>::shuffle()
{
  int i, n, tmp, rand_idx;

  for (i = 0, n = array.size(); i < n; i++)
  {

    tmp = array[i]; // almacenar temporalmente

    rand_idx = rand() % n; //índice aleatorio en el vector

    // intercambio cada elemento en el vector con otro indice  al azar
    array[i] = array[rand_idx];
    array[rand_idx] = tmp;
  }
}

template <typename T>
void Individual<T>::bogo_sort()
{
  while (!is_sorted())
    shuffle();
}

template <typename T>
void Individual<T>::print()
{
  for (auto it = array.begin(); it != array.end(); it++)
    std::cout << *it << " ";
  std::cout << "\t";
}

template <typename T>
void Individual<T>::print_details(int _fitness, double _percent)
{
  print();
  std::cout << "\tFitness: " << _fitness << "\tPorcentaje " << _percent << "%" << std::endl;
}