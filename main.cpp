// // "- Crear Github
// //     - Hacer el bogosort - Encapsular el arreglo en una clase individuo - Class Fitness para verificar qué tan ordenado está - Crear una pieza de arte(Framework) "
// // C++ implementation of Bogo Sort
#include "./classes/Genetic.cpp"
#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    std::cout << "Raa!" << std::endl;

    //Incializar
    std::vector<int> array = {6, 5, 1, 2, 4, 3, 0, 7};
    Genetic test = Genetic(array, 0.3, 10, 4);
    test.iniciar();

    //Cleaning
    array.clear();
    return 0;
}
