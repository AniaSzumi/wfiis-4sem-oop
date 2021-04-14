#pragma once
#include <iostream>
#include "Formula.h"

/**@class Product klasa opisujaca operacje mnozenia
*/
class Product : public Formula{
public:

  /**@brief konstruktor
  * @param f1 pierwszy skladnik mnozenia
  * @param f2 drugi skladnik mnozenia
  */
  Product(Formula& f1, Formula& f2);

  /**@brief fukcja wypisujaca operacje mnozenia
  */
  void Print() const override;

  /**@brief fukcja wypisujaca operacje mnozenia wraz z jej wynikiem
  */
  void PrintWithValue() const override;

  /**@brief fukcja zwracajaca wynik mnozenia
  * @return wynik mnozenia
  */
  double Value() const override;
};