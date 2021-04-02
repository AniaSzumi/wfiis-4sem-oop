#include "../include/Figura.h"

Figura::Figura(std::string o) : _opis(o), _size(0){
  _w.reserve(4);
  std::cout << "Jestem nową figurą " << _opis << std::endl;
}

Figura& Figura::operator+=(const Wierzcholek &w){
  _w.push_back(w);
  _size++;
  return *this;
}

Figura& Figura::dodajW(const Wierzcholek &w){
  _w.push_back(w);
  _size++;
  return *this;
}

std::string Figura::nazwa(){ return _opis; }

bool Figura::operator==(const Figura& f2){
  int s = 0;
  for(int i = 0; i < _w.size(); i++){
    s += (_w[i] == f2._w[i]);
  }
  if (s == _w.size() ){
    return true;
  }
  else return false;
}

int Figura::getS(){ return _size; }

Wierzcholek& Figura::getW(int n){
  return _w[n];
}

