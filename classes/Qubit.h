#pragma once
#include <cmath>

// Unidad más pequeña de representación del QEA
class Qubit
{
    friend class Genetic;

private:
    // Amplitud de la probabilidad
    double alpha;
    double beta;

public:
    Qubit();
    int collapse() const; // el qubit colapsa
};

#include "Qubit.cpp"