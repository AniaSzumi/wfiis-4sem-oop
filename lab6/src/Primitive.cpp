#include "../include/Primitive.h"

Primitive::Primitive(double n) : Formula(), _data(n) {}

void Primitive::Print() const{
  std::cout<<_data;
}

double Primitive::Value() const{
  return _data;
}

void Primitive::Set(double n){
  _data = n;
}
