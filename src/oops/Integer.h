//
// Created by ishu on 5/23/20.
//

#ifndef CODING_INTEGER_H
#define CODING_INTEGER_H
#include <iostream>
class Integer {
  int *pInt;

public:
  Integer();
  Integer(Integer &&);
  Integer &operator=(const Integer &);
  Integer &operator=(Integer &&);
  Integer(int);
  Integer(const Integer &);
  int getval() const;
  void setval(int);
  bool operator==(const Integer &other);
  Integer operator+(const Integer &other);
  Integer &operator++();
  Integer operator++(int);
  void operator()();
  friend std::ostream &operator<<(std::ostream &, Integer &);
  friend std::istream &operator>>(std::istream &, Integer &);
  friend Integer operator+(int, const Integer &);
  ~Integer();
};

#endif // CODING_INTEGER_H
