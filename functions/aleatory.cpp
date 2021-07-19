#include <bits/stdc++.h>

int aleatorio(int *profit, int *weight, int n)
{
  profit = new int[n];
  weight = new int[n];
  srand(static_cast<unsigned int>(time(nullptr)));
  int w_max = 0;

  for (int i = 0; i < n; i++)
  {
    profit[i] = rand() % 100 + 1;
    weight[i] = rand() % 100 + 1;
  }
}