// "- Crear Github
//     - Hacer el bogosort - Encapsular el arreglo en una clase individuo - Class Fitness para verificar qué tan ordenado está - Crear una pieza de arte(Framework) "
// C++ implementation of Bogo Sort
#include <bits/stdc++.h>
using namespace std;

// Comprobar si el arreglo esta ordenado o no
bool isSorted(int a[], int n)
{
  while (--n > 1)
    if (a[n] < a[n - 1])
      return false;
  return true;
}

// Genera permutación de la matriz
void shuffle(int a[], int n)
{
  for (int i = 0; i < n; i++)
    swap(a[i], a[rand() % n]);
}

// Ordena los arreglos de A[0..n-1] usando Bogo Sort
void bogosort(int a[], int n)
{
  // if array is not sorted then shuffle
  // the array again
  while (!isSorted(a, n))
    shuffle(a, n);
}

// prints the array
void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

// Driver code
// int main()
// {
//   int a[] = {3, 2, 5, 1, 0, 4};
//   int n = sizeof a / sizeof a[0];
//   bogosort(a, n);
//   printf("Sorted array :\n");
//   printArray(a, n);
//   return 0;
// }
