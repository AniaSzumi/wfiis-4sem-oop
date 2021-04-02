#pragma once
#include "Figura.h"

/**
@class Prostokat klasa pochodna opisująca prostokąt
*/
class Prostokat : public Figura{
public:
  /**
  @brief konstruktor klasy Prostokat
  */
  Prostokat(std::string o);

  /**
  @brief metoda zwracająca pole prostokąta
  */
  int pole();
};