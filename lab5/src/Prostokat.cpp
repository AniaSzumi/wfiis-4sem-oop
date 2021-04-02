#include "../include/Prostokat.h"

Prostokat::Prostokat(std::string o) : Figura(o) {
    std::cout << "Tak naprawdę jestem prostokątem." << std::endl;
}

int Prostokat::pole(){ 
  int x = _w[1].GetX() - _w[0].GetX();
  int y = _w[2].GetY() - _w[1].GetY();
  return x * y;
}