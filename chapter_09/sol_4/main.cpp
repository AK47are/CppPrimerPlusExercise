#include "sales.h"
using namespace SALES;

int main() {
  Sales sales[2];
  double arr[4]{21, 12.1, 244.1, 64.3};
  setSales(sales[0], arr, 3);
  showSales(sales[0]);
  setSales(sales[1]);
  showSales(sales[1]);
}
