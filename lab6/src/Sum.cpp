#include "../include/Sum.h"

Sum::Sum(Formula& f1, Formula& f2) : Formula(f1, f2) {}

void Sum::Print() const{
  std::cout << "(";
  _f1->Print();
  std::cout << "+";
  _f2->Print();
  std::cout << ")";
}

void Sum::PrintWithValue() const{
  Print();
  std::cout << " = " << Value() << std::endl;
}

double Sum::Value() const{
  return _f1->Value()+_f2->Value();
}
