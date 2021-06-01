#include "./includes/Individual.hpp"

template <typename T>
Individual<T>::Individual(std::vector<T> const &_array)
{
  array = _array;
}

template <typename T>
bool Individual<T>::is_sorted()
{
  for (int i = 1, n = array.size(); i < n; i++)
  {
    if (array[i - 1] > array[i])
      return false;
    // returns false if an element is smaller than one to its left
  }
  return true;
}

template <typename T>
void Individual<T>::shuffle()
{
  int i, n, tmp, rand_idx;

  for (i = 0, n = array.size(); i < n; i++)
  {

    tmp = array[i]; // store temporarily

    rand_idx = rand() % n; // pick a random index in the vector/array

    // swap each element in vector/array with another one that is chosen randomly
    array[i] = array[rand_idx];
    array[rand_idx] = tmp;
  }
}

template <typename T>
void Individual<T>::bogo_sort()
{
  while (!this.is_sorted(array))
    this.shuffle(array);
}

template <typename T>
void Individual<T>::print()
{
  for (auto it = array.begin(); it != array.end(); it++)
    std::cout << *it << " ";
  std::cout << "\n";
}