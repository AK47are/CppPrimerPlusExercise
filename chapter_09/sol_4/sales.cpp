#include "sales.h"

#include <iostream>
using namespace SALES;

// 函数在命名空间内要写明！
void SALES::setSales(Sales& s, const double ar[], int n) {
  for (int i = 0; i < QUARTERS; ++i)
    if (i < n)
      s.sales[i] = ar[i];
    else
      s.sales[i] = 0;
  double sum = 0, max = s.sales[0], min = s.sales[0];
  for (int i = 0; i < QUARTERS; ++i) {
    sum += s.sales[i];
    if (max < s.sales[i]) max = s.sales[i];
    if (min > s.sales[i]) min = s.sales[i];
  }
  s.average = sum / QUARTERS;
}

void SALES::setSales(SALES::Sales& s) {
  for (int i = 0; i < QUARTERS; ++i) {
    std::cout << "Enter value: ";
    std::cin >> s.sales[i];
  }
  double sum = 0, max = s.sales[0], min = s.sales[0];
  for (int i = 0; i < QUARTERS; ++i) {
    sum += s.sales[i];
    if (max < s.sales[i]) max = s.sales[i];
    if (min > s.sales[i]) min = s.sales[i];
  }
  s.average = sum / QUARTERS;
}

void SALES::showSales(const Sales& s) {
  for (int i = 0; i < QUARTERS; ++i) std::cout << " " << s.sales[i];
  std::cout << "\nAverage: " << s.average << "\nMax: " << s.max
            << "\nMin: " << s.min << std::endl;
}
