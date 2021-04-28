#pragma once
#include <iostream>
#include <vector>
#include "File.h"

class Dir final: public File {
public:
  Dir(std::string n);
  ~Dir();

  void Print(int s) const override;
  void operator+=(File* f);
  
  Dir* findDir(std::string n);
  File* get(std::string n);
  void add(File* f);
  // friend std::ostream& operator<<(std::ostream &o, const File& f);
private:
  std::vector<File*> _v;
};