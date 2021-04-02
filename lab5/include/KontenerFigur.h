#pragma once
#include "Figura.h"

/**
  @class KontenerFigur kontener do przetrzymywania obiektów klasy Figura
*/
class KontenerFigur{
public:
  /**
  @brief domyślny konstruktor
  */
  KontenerFigur();

  /**
  @brief operator dodawania nowej figury do kontenera
  */
  KontenerFigur& operator+=(const Figura* f);

  /**
  @brief metoda zwracająca figurę o indeksie n
  */
  Figura& getF(int n) ;

  /**
  @brief metoda zwracająca ilość figur w kontenerze
  */
  int getS() const;

private:
  int _size; /**< ilość figur w kontenerze */
  std::vector<Figura> _vf; /**< wektor figur */
};

/**
@brief operator wypisania
*/
std::ostream& operator<<(std::ostream& o,  KontenerFigur& k);