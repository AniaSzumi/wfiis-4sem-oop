#include "../include/Product.h"

Product::Product(Formula& f1, Formula& f2) : Formula(f1, f2) {}

void Product::Print() const{
  std::cout << "(";
  _f1->Print();
  std::cout << "*";
  _f2->Print();
  std::cout << ")";
}

void Product::PrintWithValue() const{
  Print();
  std::cout << " = " << Value() << std::endl;
}

double Product::Value() const{
  return _f1->Value()*_f2->Value();
}
