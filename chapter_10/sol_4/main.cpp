#include <iostream>
namespace SALES {
const int QUARTERS = 4;
class Sales {
 private:
  double sales[QUARTERS];
  double average;
  double max;
  double min;

 public:
  // 函数在命名空间内要写明！
  Sales(const double ar[], int n) {
    for (int i = 0; i < QUARTERS; ++i)
      if (i < n)
        sales[i] = ar[i];
      else
        sales[i] = 0;
    double sum = 0;
    max = sales[0], min = sales[0];
    for (int i = 0; i < QUARTERS; ++i) {
      sum += sales[i];
      if (max < sales[i]) max = sales[i];
      if (min > sales[i]) min = sales[i];
    }
    average = sum / QUARTERS;
  }

  Sales() {
    for (int i = 0; i < QUARTERS; ++i) {
      std::cout << "Enter value: ";
      std::cin >> sales[i];
    }
    double sum = 0;
    max = sales[0], min = sales[0];
    for (int i = 0; i < QUARTERS; ++i) {
      sum += sales[i];
      if (max < sales[i]) max = sales[i];
      if (min > sales[i]) min = sales[i];
    }
    average = sum / QUARTERS;
  }

  void showSales() {
    for (int i = 0; i < QUARTERS; ++i) std::cout << " " << sales[i];
    std::cout << "\nAverage: " << average << "\nMax: " << max
              << "\nMin: " << min << std::endl;
  }
};
}  // namespace SALES

int main() {
  using namespace SALES;
  Sales* sales[2];
  double arr[4]{21, 12.1, 244.1, 64.3};
  sales[0] = new Sales(arr, 3);
  sales[0]->showSales();
  sales[1] = new Sales();
  sales[1]->showSales();
}
