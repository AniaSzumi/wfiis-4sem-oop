#pragma once
#include <iostream>

/**@class Formula klasa bazowa dla obliczen
*/
class Formula{
public:

  /**@brief konstruktor bezparametrowy
  */
  Formula();

  /**@brief konstruktor z parametrami
  * @param f1 pierwszy skladnik operacji
  * @param f2 drugi skladnik operacji
  */
  Formula(Formula& f1, Formula& f2);

  /**@brief fukcja wypisujaca dana operacje
  */
  virtual void Print() const;

  /**@brief fukcja wypisujaca dana operacje wraz z jej wynikiem
  */
  virtual void PrintWithValue() const;

  /**@brief fukcja wypisujaca dana operacje wraz z jej wynikiem
  */
  virtual double Value() const;
  
protected:
  Formula* _f1; /**< 1 skladnik operacji */
  Formula* _f2; /**< 2 skladnik operacji */
};