#include "../include/Formula.h"

Formula::Formula() : _f1(nullptr), _f2(nullptr) {}

Formula::Formula(Formula& f1, Formula& f2) : _f1(&f1), _f2(&f2) {}

void Formula::Print() const{}

void Formula::PrintWithValue() const{}

double Formula::Value() const{ return 0.0; }
