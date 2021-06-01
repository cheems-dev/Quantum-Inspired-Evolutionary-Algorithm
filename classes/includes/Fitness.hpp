#ifndef FITNESS_HPP
#define FITNESS_HPP

template <typename T>
class Fitness
{
public:
  virtual bool is_sorted() = 0;
};

#endif