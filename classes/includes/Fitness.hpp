#ifndef FITNESS_HPP
#define FITNESS_HPP

// clase abstracta contiene metodo virtual puro"is_Sorted()"
class Fitness
{
public:
  virtual bool is_sorted() = 0;
};

#endif