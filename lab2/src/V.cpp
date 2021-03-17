#include "../include/V.h"

V::V(int n){
  _len = n;
  _data = new int(_len);
  _at = 0;
  for(int i=0; i<_len; i++){
    _data[i] = 0;
  }
}

V::~V(){
  delete [] _data;
}

V::V(const V& v2) : V(v2._len){
  for(int i=0; i<v2._len; i++){
    _data[i] = v2._data[i];
  }
}

V::V(V&& v2) : _data(std::move(v2._data)){
  _len = v2._len;
  _at = 0;
  v2._len = 0;
}

// V& V::operator=(int n){
//   _data[_at] = n;
// }

// V& V::operator=(const V& v2){
// }

V::operator double() const{
  return this->norm();
}

int& V::at(int n) const{
  // _at = n;
  return _data[n];
}

void V::print(std::string name) const{
  std::cout<<name<<"(";
  for(int i=0; i<_len-1; i++){
    std::cout<<_data[i]<<", ";
  }
  std::cout<<_data[_len-1]<<")"<<std::endl;
}

int V::dot(const V& v1, const V& v2){
  if(v1._len != v2._len){ 
    std::cout<<"Error, vectors of different dimensions!";
  }
  int prod=0;
  for(int i=0; i<v1._len; i++){
    prod += v1._data[i] * v2._data[i];
  }
  return prod;
}

int V::norm() const{
  int norm = 0, sum = 0;
  for(int i=0; i<_len; i++){
    sum += _data[i] * _data[i];
  }
  norm = sqrt(sum);
  return norm;
}

V V::sum(const V& v1, const V& v2){
  if(v1._len != v2._len){ 
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
  }
  V temp(v1._len);
  for(int i=0; i<v1._len; i++){
    temp._data[i] = v1._data[i] + v2._data[i];
  }
  return temp;
}

V V::sum(const V& v1, int n){
  V temp(v1._len);
  for(int i=0; i<v1._len; i++){
    temp._data[i] = v1._data[i] + n;
  }
  return temp;
}