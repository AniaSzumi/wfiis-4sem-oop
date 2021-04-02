#include "../include/KontenerFigur.h"

KontenerFigur::KontenerFigur() : _size(0){
  _vf.reserve(3);
}

KontenerFigur& KontenerFigur::operator+=(const Figura* f){
  _vf.push_back(*f);
  _size++;
}

int KontenerFigur::getS() const{ return _size; }

Figura& KontenerFigur::getF(int n) {
  return _vf[n];
}

std::ostream& operator<<(std::ostream& o,  KontenerFigur& k){
  for(int i = 0; i < k.getS(); i++){
    o << "Figura " << k.getF(i).nazwa() << ":" << std::endl << " ";
    for(int j = 0; j < k.getF(i).getS(); j++){
      std::cout << k.getF(i).getW(j);
    }
    std::cout << std::endl;
  }
  return o;
}