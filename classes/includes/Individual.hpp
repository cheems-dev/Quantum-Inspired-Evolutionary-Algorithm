#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "Fitness.hpp"

// clase generica que hereda de la clase abstracta Fitness
template <typename T>
class Individual : public Fitness
{
private:
  std::vector<T> array;
  std::vector<T> copy_array;
  // metodo privado para barajear "chocolatear"
  void shuffle();

public:
  // Constructor de clase que recibe un vector Generico
  Individual(std::vector<T> &);
  // Retornamos nuestro vector "array"
  std::vector<T> getArray();
  // Retornamos nuestro vector "array"
  bool is_sorted();
  // Algoritmo de ordenamiento bobo
  void bogo_sort();
  // Imprimesion de nuestro vector "array"
  void print();
  // Imprime fitness y porcentaje de ordanamiento
  void print_details(int, double);
};

#endif