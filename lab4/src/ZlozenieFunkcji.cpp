#include "../include/ZlozenieFunkcji.h"

ZlozenieFunkcji::ZlozenieFunkcji(){
  _v.reserve(4);
}

void ZlozenieFunkcji::insert(std::function<double(double)> f){
  _v.push_back(f);
}

double ZlozenieFunkcji::wynik(double x){
  _lastx = x;
  double result = x;
  for(int i=0; i<_v.size(); i++){
    result = _v[i](result);
  }
  return result;
}

double ZlozenieFunkcji::operator[](unsigned n){
  double result = _lastx;
  for(unsigned i=0; i<=n; i++){
    result = _v[i](result);
  }
  return result;
}

