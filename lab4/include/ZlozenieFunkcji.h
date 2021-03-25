#pragma once
#include <iostream>
#include <functional>
#include <vector>

/**
@class ZlozenieFunkcji klasa przechowywujaca kilka funkcji i podajaca wynik ich zlozenia
*/
class ZlozenieFunkcji{
  public:
  /**
  @brief konstruktor klasy ZlozenieFunkcji
  */
  ZlozenieFunkcji();

  /**
  @brief metoda dodajaca kolejną funkcją do złożenia
  @param f funkcja dodawana do złożenia
  */
  void insert(std::function<double(double)> f);

  /**
  @brief metoda zwracajaca wynik zlozenia funkcji z danym argumentem
  @param x argument do wywołania funkcji
  @return wynik złożenia funkcji
  */
  double wynik(double x);

  /**
  @brief metoda zwracajaca wynik zlozenia n funkcji z ostatnim danym argumentem
  @param n ilość funkcji do złożenia
  @return wynik złożenia funkcji
  */
  double operator[](unsigned n);

  private:
  std::vector<std::function<double(double)>> _v; /**< wektor funkcji do złożenia */
  double _lastx; /**< ostatni argument funkcji */
};