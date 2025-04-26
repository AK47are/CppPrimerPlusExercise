#include <iostream>
template <typename T>
T max5(T arr[5]) {
  T max = arr[0];
  for (int i = 0; i < 5; ++i)
    if (max < arr[i]) max = arr[i];
  return max;
}

int main() {
  int a[5] = {1, 3, 2, 9, 7};
  double b[5] = {1.4, 1.2, 2.5, 1.9, 3.4};
  std::cout << max5(a) << "\t" << max5(b) << "\n";
}
