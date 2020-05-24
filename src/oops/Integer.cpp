//
// Created by ishu on 5/23/20.
//

#include "Integer.h"

Integer::Integer() : Integer(0){};

Integer::Integer(int x) { this->pInt = new int{x}; };

Integer::Integer(const Integer &other) { this->pInt = new int{*(other.pInt)}; };

int Integer::getval() const { return *(this->pInt); };

void Integer::setval(int x) { *this->pInt = x; };

Integer::Integer(Integer &&other) {
  std::cout << "move assignment operator called\n";
  this->pInt = other.pInt;
  other.pInt = nullptr;
}

Integer Integer::operator+(const Integer &other) {
  Integer tmp{*(this->pInt) + *(other.pInt)};
  return tmp;
}

void Integer::operator()() {
  std::cout << "Regular function overload\n Cur value : " << *pInt << std::endl;
}

Integer &Integer::operator++() {
  ++(*this->pInt);
  return *this;
}

Integer Integer::operator++(int) {
  Integer tmp(*this);
  ++(*this->pInt);
  return tmp;
}
bool Integer::operator==(const Integer &other) { return *pInt == *other.pInt; }

Integer::~Integer() { delete pInt; };

Integer &Integer::operator=(const Integer &other) {
  if (*this == other) {
    return *this;
  }
  delete pInt;
  pInt = new int(*other.pInt);
  return *this;
}

Integer &Integer::operator=(Integer &&other) {
  std::cout << "Move assignment called\n";
  if (*this == other) {
    return *this;
  }
  delete pInt;
  pInt = other.pInt;
  other.pInt = nullptr;
  return *this;
}

Integer operator+(int val, const Integer &other) {
  Integer tmp{val + *(other.pInt)};
  return tmp;
}

std::ostream &operator<<(std::ostream &out, Integer &cur) {
  out << *cur.pInt;
  return out;
}

std::istream &operator>>(std::istream &input, Integer &cur) {
  int x;
  input >> x;
  *(cur.pInt) = x;
  return input;
}
