#pragma once
#include <iostream>
#include "Formula.h"

/**@class Primitive klasa opisujaca pojedyncza liczbe
*/
class Primitive : public Formula{
public:
  /**@brief konstruktor
  * @param n liczba do wpisania
  */
  Primitive(double n);

  /**@brief fukcja wypisujaca liczbe
  */
  void Print() const override;

  /**@brief fukcja zwracajaca liczbe
  * @return liczba
  */
  double Value() const override;

  /**@brief fukcja zmieniajaca liczbe
  * @param n nowa liczba do zapisania
  */
  void Set(double n);

private:
  double _data; /**< liczba */
};