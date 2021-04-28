#include "../include/File.h"
#include "../include/Dir.h"
  
File::File(std::string n) : _n(n){}

File::~File(){  }

void File::Print(int s) const{
  for(int i=0; i<s; i++){
    std::cout << " ";
  }
  std::cout << _n << " (FILE)" << std::endl;
}

std::string File::getName(){ return _n; }

std::ostream& operator<<(std::ostream &o, const File& f){
  // dynamic_cast<const Dir&>(f).Print(0);
  f.Print(0);
  return o;
}

