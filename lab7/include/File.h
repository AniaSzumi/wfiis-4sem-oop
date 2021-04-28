#pragma once
#include <iostream>

class File{
public:
  File(std::string n);
  virtual ~File();
  virtual void Print(int s) const;
  std::string getName();
  File* get(std::string n);
  
  friend std::ostream& operator<<(std::ostream &o, const File& f);
protected:
  int _s;
  std::string _n;
};