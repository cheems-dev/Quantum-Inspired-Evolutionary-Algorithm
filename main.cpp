#include <bits/stdc++.h>
#include "./classes/Genetic.h"

int main(int argc, char **argv)
{
    //Algorithm
    // fitness type penality 1
    // fitness type repair 2

    puts("fitness : Penalty!");
    srand(static_cast<unsigned int>(time(nullptr)));
    Genetic a(20, 50, 1000, 300, 1);
    a.exe();
    //free memory

    puts("fitness : Repair");
    srand(static_cast<unsigned int>(time(nullptr)));
    Genetic b(20, 50, 1000, 300, 2);
    b.exe();
    //free memory

    return EXIT_SUCCESS;
}
