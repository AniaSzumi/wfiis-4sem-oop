#pragma once
#include <iostream>
#include "Formula.h"

/**@class Ratio klasa opisujaca operacje dzielenia
*/
class Ratio : public Formula{
public:

  /**@brief konstruktor
  * @param f1 pierwszy skladnik dzielenia
  * @param f2 drugi skladnik dzielenia
  */
  Ratio(Formula& f1, Formula& f2);

  /**@brief fukcja wypisujaca operacje dzielenia
  */
  void Print() const override;

  /**@brief fukcja wypisujaca operacje dzielenia wraz z jej wynikiem
  */
  void PrintWithValue() const override;

  /**@brief fukcja zwracajaca wynik dzielenia
  * @return wynik dzielenia
  */
  double Value() const override;
};