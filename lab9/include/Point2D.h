#pragma once
#include <iostream>
#include <cmath>

/**@class Point2D klasa opisująca punkt w przestrzeni
*/
class Point2D{
public:
  /**@brief konstruktor klasy Point2D
  * @param x składowa x punktu
  * @param y składowa y punktu
  */
  Point2D(int x, int y);

  /**@brief statyczna funkcja wypisująca dany punkt
  * @param point punkt do wypisania
  */
  static void PrintPoint(const Point2D point);

  /**@brief statyczna funkcja wypisująca współrzędną Y danego punktu
  * @param point punkt o współrzędnej Y do wypisania
  */
  static void FunctionPrintY(const Point2D& point);

  /**@brief funkcja wypisująca punkt
  */
  void Print() const;

  /**@brief funkcja zwracająca współrzędną x danego punktu
  * @return współrzędna x danego punktu
  */
  int GetX() const;

  /**@brief funkcja zwracająca współrzędną y danego punktu
  * @return współrzędna y danego punktu
  */
  int GetY() const;

  /**@brief operator porównujący ze sobą 2 punkty na podstawie ich odległości od środka układu współrzędnych
  * @param p2 drugi punkt do porównania
  * @return true jeśli odległość pierwszego punktu jest mniejsza
  */
  bool operator<(const Point2D& p2) const;

private:
  int _x; /**< współrzędna x punktu */
  int _y; /**< współrzędna y punktu */
  double _dist; /**< odległość punktu od środka układu współrzędnych */
};

/**@brief funkcja porównująca większe współrzędne 2 punktów
* @param p1 pierwszy punkt do porównania
* @param p2 drugi punkt do porównania
* @return true jeśli większa współrzędna pierwszego punktu jest mniejsza od większej współrzędnej drugiego punktu
*/
bool MaxDistanceAsc(const Point2D& p1, const Point2D& p2);

/**@brief funkcja wypisująca współrzędną X danego punktu
* @param point punkt o współrzędnej X do wypisania
*/
void FunctionPrintX(const Point2D& point);

/**@class OrderAscX klasa porównująca współrzędne X punktów
*/
class OrderAscX{
public:
  /**@brief operator () klasy pozwalający na wywołanie jej i porównanie 2 punktów
  * @param p1 pierwszy punkt do porównania
  * @param p2 drugi punkt do porównania
  * @return true jeśli składowa x pierwszego punktu jest mniejsza od składowej x drugiego punktu
  */
  bool operator()(const Point2D& p1, const Point2D& p2);
};

/**@class OrderDescY klasa porównująca współrzędne Y punktów
*/
class OrderDescY{
public:
  /**@brief operator () klasy pozwalający na wywołanie jej i porównanie 2 punktów
  * @param p1 pierwszy punkt do porównania
  * @param p2 drugi punkt do porównania
  * @return true jeśli składowa y pierwszego punktu jest większa od składowej y drugiego punktu
  */
  bool operator()(const Point2D& p1, const Point2D& p2);
};