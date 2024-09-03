#include <iostream>
#include <set>
void reduce(long ar[], int n) {
  std::set<long> as(ar, ar + (n));
  std::cout << "整理后:";
  for (auto pt = as.begin(); pt != as.end(); ++pt) std::cout << " " << *pt;
  std::cout << std::endl;
}

int main() {
  int NUM = 5;
  long ar[5]{12324, 123, 123, 231, 342};
  std::cout << "原始数组:";
  for (int i = 0; i < NUM; ++i) std::cout << " " << ar[i];
  std::cout << std::endl;
  reduce(ar, NUM);
}
