#pragma once
#include <iostream>
#include <cmath>

/**
@class Sinus klasa realizująca funkcję sinus(a * x + b)
*/
class Sinus{
  public:

  /** 
  @brief konstruktor klasy Sinus 
  @param a wartość składowej _a klasy
  @param b wartość składowej _b klasy
  */
  Sinus(double a, double b); 

  /** 
  @brief operator wywołania funkcji Sinus 
  @param x argument x funkcji Sinus
  @return sin(_a*x+_b)
  */
  double operator()(double x) const; 

  private:
  double _a; /**< wartość parametru a dla funkcji Sinus */
  double _b; /**< wartość parametru a dla funkcji Sinus */
};

/**
@class PierwiastekKwadratowy klasa realizująca funkcję pierwiastka kwadratowego z x
*/
class PierwiastekKwadratowy{
  public:
  /**
  @brief operator wywołania funkcji pierwiastka kwadratowego
  @param x argument x funkcji pierwiastka kwadratowego
  @return sqrt(x)
  */
  double operator()(double x) const; 
};

/**
@class Liniowa klasa realizująca funkcję liniową
*/
class Liniowa{
  public:
  /**
  @brief konstruktor klasy Liniowa
  @param a wartość składowej _a klasy
  @param b wartość składowej _b klasy
  */  
  Liniowa(double a, double b);

  /**
  @brief operator wywołania funkcji liniowej
  @param x argument x funkcji 
  @return _a * x + _b
  */
  double operator()(double x) const;

  private:
  double _a; /**< wartość parametru a dla funkcji liniowej */
  double _b; /**< wartość parametru b dla funkcji liniowej */
};