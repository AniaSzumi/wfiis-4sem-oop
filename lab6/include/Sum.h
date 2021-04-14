#pragma once
#include <iostream>
#include "Formula.h"

/**@class Sum klasa opisujaca operacje dodawania
*/
class Sum : public Formula{
public:

  /**@brief konstruktor
  * @param f1 pierwszy skladnik dodawania
  * @param f2 drugi skladnik dodawania
  */
  Sum(Formula& f1, Formula& f2);

  /**@brief fukcja wypisujaca operacje dodawania
  */
  void Print() const override;

  /**@brief fukcja wypisujaca operacje dodawania wraz z jej wynikiem
  */
  void PrintWithValue() const override;

  /**@brief fukcja zwracajaca wynik dodawania
  * @return wynik dodawania
  */
  double Value() const override;
};