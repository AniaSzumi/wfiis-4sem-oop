#pragma once
#include <iostream>
#include <vector>
#include "Wierzcholek.h"

/**
@class Figura klasa bazowa opisująca figurę
*/
class Figura{
public:
  /**
  @brief konstruktor klasy Figura
  */
  Figura(std::string o);

  /** 
  @brief operator dodawania nowego wierzchołka
  */
  Figura& operator+=(const Wierzcholek &w);

  /**
  @brief metoda dodająca nowy wierzchołek
  */
  Figura& dodajW(const Wierzcholek &w);

  /**
  @brief metoda zwracająca nazwę figury
  */
  std::string nazwa();

  /**
  @brief metoda porównująca figury
  */
  bool operator==(const Figura& f2);

  /**
  @brief metoda zwracająca ilość wierzchołków
  */
  int getS();

  /**
  @brief metoda zwracająca wierzchołek o indeksie n
  */
  Wierzcholek& getW(int n);

protected:
  std::vector<Wierzcholek> _w; /**< wektor wierzchołków figury */
  std::string _opis; /**< nazwa figury */
  int _size; /**< ilość wierzchołków w figurze */
};