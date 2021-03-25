#include "../include/FancyText.h"

std::ostream& operator<<(std::ostream& o, FancyText& t){
  if(t._data) o << t._data;
  if(t._next){
    FancyText* temp = t._next;
    while(temp){
      o << temp->_data;
      temp = temp->_next;
    }
  }
  return o;
}

FancyText::FancyText() : _len(0), _data(nullptr), _next(nullptr){}

FancyText::FancyText(const char* text) : _len(strlen(text)), _next(nullptr){
  _data = new char[_len];
  strcpy(_data, text);
}

FancyText::FancyText(FancyText&& t2) : FancyText(t2._data){
  t2._len = 0;
  delete [] t2._data;
  t2._data = nullptr;
  _next = std::exchange(t2._next, nullptr);
}

FancyText::~FancyText(){
  if(_data) delete [] _data;
}

void FancyText::operator+=(const char* add){
  FancyText* new_text = new FancyText(add);
  FancyText* temp = this;
  while(temp->_next){
    temp = temp->_next;
  }
  temp->_next = new_text;
}

void FancyText::operator+=(FancyText&& t2){
  FancyText* temp = this;
  while(temp->_next){
    temp = temp->_next;
  }
  temp->_next = &t2;
}

void FancyText::operator=(FancyText&& t2){
  _len = std::exchange(t2._len,0);
  _data = std::exchange(t2._data, nullptr);
  _next = std::exchange(t2._next, nullptr);
}


int FancyText::size() const{
  FancyText* temp = this->_next;
  int size = _len;
  while(temp){
    size += temp->_len;
    temp = temp->_next;
  }
  return size;
}

int FancyText::fragments() const{
  FancyText* temp = this->_next;
  int size = 1;
  while(temp){
    size++;
    temp = temp->_next;
  }
  return size;
}

const FancyText& FancyText::fragment(int n) const{
  if(n==0){
    return *this;
  }
  else{
    FancyText* temp = this->_next;
    for(int i=1; i<n; i++){
      temp = temp->_next;
    }
    return *temp;
  }
}

const char* FancyText::str() const{
  return _data;
}
