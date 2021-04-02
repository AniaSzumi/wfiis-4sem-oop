#pragma once
#include <iostream>

/**
@class Wierzcholek klasa opisujaca punkt w przestrzeni
*/
class Wierzcholek{
public:
  /**
  @brief konstruktor klasy Wierzcholek
  */
  Wierzcholek(int x, int y);

  /**
  @brief metoda zwracająca współrzedną x
  */
  int GetX() const;

  /**
  @brief metoda zwracająca współrzedną x
  */
  int GetY() const;

  /**
  @brief metoda porównująca wierzchołki
  */
  int operator==(const Wierzcholek& w2);

private:
  int _x; /**< współrzedna x */
  int _y; /**< współrzedna y */
};

std::ostream& operator<<(std::ostream& o, const Wierzcholek& w);