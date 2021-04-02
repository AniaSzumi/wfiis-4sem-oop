#include "../include/Wierzcholek.h"

Wierzcholek::Wierzcholek(int x, int y) : _x(x), _y(y) {}

int Wierzcholek::GetX() const { return _x; }

int Wierzcholek::GetY() const { return _y; }

std::ostream& operator<<(std::ostream& o, const Wierzcholek& w){
  o << "(" << w.GetX() << ", " << w.GetY() << ") ";
  return o;
}

int Wierzcholek::operator==(const Wierzcholek& w2){
  if( (_x == w2._x) && (_y == w2._y)){
    return 1;
  }
  else return 0;
}
