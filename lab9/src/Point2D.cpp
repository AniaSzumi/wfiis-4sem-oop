#include "../include/Point2D.h"

Point2D::Point2D(int x, int y) : _x(x), _y(y), _dist(sqrt(_x*_x+_y*_y)) {}

void Point2D::PrintPoint(const Point2D point){ point.Print(); }

void Point2D::FunctionPrintY(const Point2D& point){
  std::cout << "Function print y=" << point.GetY() << std::endl;
}

void Point2D::Print() const{
  std::cout << "Point coordinates (" << _x << ", " << _y  << ") distance from origin: " << _dist << std::endl;
}

int Point2D::GetX() const{ return _x; }

int Point2D::GetY() const{ return _y; }

bool Point2D::operator<(const Point2D& p2) const{ return _dist < p2._dist; }


bool MaxDistanceAsc(const Point2D& p1, const Point2D& p2){
  double p1_max = p1.GetX() > p1.GetY() ? p1.GetX() : p1.GetY();
  double p2_max = p2.GetX() > p2.GetY() ? p2.GetX() : p2.GetY();
  return p1_max < p2_max;
}

void FunctionPrintX(const Point2D& point){
  std::cout << "Function print x=" << point.GetX() << std::endl;
}


bool OrderAscX::operator()(const Point2D& p1, const Point2D& p2){ return p1.GetX() < p2.GetX(); }

bool OrderDescY::operator()(const Point2D& p1, const Point2D& p2){ return p1.GetY() > p2.GetY(); }