#include "../include/Ratio.h"

Ratio::Ratio(Formula& f1, Formula& f2) : Formula(f1, f2) {}

void Ratio::Print() const{
  std::cout << "(";
  _f1->Print();
  std::cout << "/";
  _f2->Print();
  std::cout << ")";
}

void Ratio::PrintWithValue() const{
  Print();
  std::cout << " = " << Value() << std::endl;
}

double Ratio::Value() const{
  return _f1->Value()/_f2->Value();
}
