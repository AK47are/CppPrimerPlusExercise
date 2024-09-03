#include <iostream>
#include <set>
#include <string>
template <class T>
void reduce(T ar[], int n) {
  std::set<T> as(ar, ar + (n));
  std::cout << "整理后:";
  for (auto pt = as.begin(); pt != as.end(); ++pt) std::cout << " " << *pt;
  std::cout << std::endl;
}

int main() {
  int NUM1 = 5;
  long l[5]{12324, 123, 123, 231, 342};
  std::cout << "long原始数组:";
  for (int i = 0; i < NUM1; ++i) std::cout << " " << l[i];
  std::cout << std::endl;
  reduce(l, NUM1);
  std::string s[5]{"12324", "123", "difi", "231", "difi"};
  int NUM2 = 5;
  std::cout << "string原始数组:";
  for (int i = 0; i < NUM2; ++i) std::cout << " " << s[i];
  std::cout << std::endl;
  reduce(s, NUM2);
}
