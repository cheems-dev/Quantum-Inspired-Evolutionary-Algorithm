// Referencia: https://pub.towardsai.net/genetic-algorithm-optimization-algorithm-f22234015113
// #include "./classes/Genetic.cpp"
// #include "./classes/includes/Genetic.hpp"
#include "./classes/Genetic.cpp"
#include <bits/stdc++.h>
#include <ctime>
#include <iostream>

using namespace std;

int NUMBER_INDIVIDUAL = 10;
int TARGET = 11;
int LOWER_RANGE = 0;
int UPPER_RANGE = 10;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(nullptr));
    Genetic ag = Genetic(NUMBER_INDIVIDUAL, TARGET, LOWER_RANGE, UPPER_RANGE);
    ag.run();
    return 0;
}

// vector<vector<int>> generate_population(const int);

// void print_population(vector<vector<int>>);
// void print_cromosoma(vector<int> population, int);

// vector<int> cross_over(vector<int>, vector<int>);
// vector<int> mutate(vector<int>);

// int generate_number(const int, const int);
// float generate_percent(const int);

// int fitness(vector<int>);

// void genetic_algorithm(const int);

// int main(int argc, char const *argv[])
// {
//     srand((unsigned)time(nullptr));

//     genetic_algorithm(NUMBER_INDIVIDUAL);
//     return 0;
// }

// void genetic_algorithm(const int size)
// {

//     vector<vector<int>> population = generate_population(size);

//     int result = 0;
//     int index = population.size() - 1;
//     int ages = 0;
//     while (result != TARGET)
//     {
//         population.push_back((generate_percent(1) > .5) ? cross_over(population[index], population[index - 1]) : mutate(population[index]));
//         index = population.size() - 1; // actualizamos el tamaño de nuetra problacion
//         result = fitness(population[index]);
//         cout << "Generacion " << ages++ << endl;
//         print_cromosoma(population[index], result);
//     }
// };

// float generate_percent(const int)
// {
//     return (float)rand() / RAND_MAX;
// }

// vector<vector<int>> generate_population(const int size)
// {
//     vector<int> individual = {};
//     vector<vector<int>> population = {};
//     for (size_t i = 0; i < 2; i++)
//     {
//         individual = {};
//         for (size_t j = 0; j < size; j++)
//             individual.push_back(generate_number(LOWER_RANGE, UPPER_RANGE));
//         population.push_back(individual);
//     }

//     return population;
// }

// vector<int> cross_over(vector<int> parent_01, vector<int> parent_02)
// {
//     vector<int> child = {};
//     for (size_t i = 0; i < parent_01.size(); i++)
//         child.push_back((i % 2 == 0) ? parent_01[i] : parent_02[i]);
//     return child;
// }

// vector<int> mutate(vector<int> parent)
// {
//     vector<int> child = parent;
//     child[generate_number(0, parent.size() - 1)] = generate_number(0, parent.size() - 1);
//     return child;
// }

// int fitness(vector<int> individual)
// {
//     int add = 0;
//     for (size_t i = 0; i < individual.size(); i++)
//         add += individual[i];
//     return abs(add - TARGET); // valor absoluto
// }

// void print_population(vector<vector<int>> population)
// {
//     for (size_t i = 0; i < population.size(); i++)
//     {
//         for (size_t j = 0; j < population[i].size(); j++)
//             cout << population[i][j] << " ";
//         cout << endl;
//     }
// }
// void print_cromosoma(vector<int> population, int fitness = 0)
// {
//     for (size_t i = 0; i < population.size(); i++)
//         cout << population[i] << " ";
//     (fitness) ? cout << " Fitness: " << fitness << endl : cout << endl;
// }

// int generate_number(const int min, const int max)
// {
//     std::random_device rd;
//     std::default_random_engine eng(rd());
//     std::uniform_int_distribution<int> distr(min, max);
//     return distr(eng);
// }