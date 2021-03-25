#pragma once
#include <iostream>
#include <cstring>

class FancyText{
public:
  friend std::ostream& operator<<(std::ostream& o, FancyText& t);
  FancyText();
  FancyText(const char* text);
  FancyText(FancyText&& t2);
  ~FancyText();
  void operator+=(const char* add);
  void operator+=(FancyText&& t2);
  void operator=(FancyText&& t2);
  int size() const;
  int fragments() const;
  const FancyText& fragment(int n) const;
  const char* str() const;

private:
  char* _data;
  int _len;
  FancyText* _next;
};