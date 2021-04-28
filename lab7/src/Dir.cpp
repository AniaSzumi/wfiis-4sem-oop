#include "../include/Dir.h"

Dir::Dir(std::string n) : File(n){  }

Dir::~Dir(){ 
  std::cout << "Deleting Dir: " << _n <<std::endl; 
  for(int i=0; i<_v.size(); i++){
    std::cout << "About to delete " << _v[i]->getName() <<std::endl;
    delete _v[i];
  }
}

void Dir::Print(int s) const{
  for(int i=0; i<s; i++){
    std::cout << " ";
  }
  std::cout << _n << " (DIR)" << std::endl;
  for(int i=0; i<_v.size(); i++){
    _v[i]->Print(s+1);
  }
}

void Dir::operator+=(File* f){
  _v.push_back(f);
}

Dir* Dir::findDir(std::string n){
  for(int i=0; i<_v.size(); i++){
    if(_v[i]->getName() == n) return dynamic_cast<Dir*>(_v[i]);
    else return dynamic_cast<Dir*>(_v[i])->findDir(n);
  }
  return nullptr;
}

File* Dir::get(std::string n){
  for(int i=0; i<_v.size(); i++){
    if(_v[i]->getName() == n) {
      return _v[i]; }
    else if(dynamic_cast<Dir*>(_v[i])) {
      File* found = dynamic_cast<Dir*>(_v[i])->get(n);
      if (found) return found;
      }
  }
  return nullptr;
}

void Dir::add(File* f){
  _v.push_back(f);
}

// std::ostream& operator<<(std::ostream &o, const File& f){
//   f.Print(0);
//   return o;
// }
