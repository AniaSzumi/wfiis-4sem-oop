#include <iostream>
#include <string>
#include <cmath>

class V{
public:
  V(int n);
  ~V();
  V(const V& v2);
  V(V&& v2);
  // V& operator=(int n);
  // V& operator=(const V& v2);
  operator double() const;
  int& at(int n) const;
  void print(std::string name) const;
  static int dot(const V& v1, const V& v2);
  int norm() const;
  static V sum(const V& v1, const V& v2);
  static V sum(const V& v1, int n);

private:
  int* _data;
  int _len;
  int _at;
};