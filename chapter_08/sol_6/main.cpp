#include <cstring>
#include <iostream>
template <typename T>
T max(T arr[], int n) {
  T max = arr[0];
  for (int i = 0; i < n; ++i)
    if (max < arr[i]) max = arr[i];
  return max;
}
const char* max(const char* arr[], int n) {
  const char* max = arr[0];
  for (int i = 0; i < n; ++i)
    if (strlen(max) < strlen(arr[i])) max = arr[i];
  return max;
}

int main() {
  int a[6] = {1, 3, 2, 9, 7, 2};
  double b[4] = {1.4, 1.2, 2.5, 1.9};
  std::cout << max(a, 5) << "\t" << max(b, 4) << "\n";
  const char* c[5] = {"Hello", "World", "What", "forty", "fivety"};
  std::cout << max(c, 5) << "\n";
}
