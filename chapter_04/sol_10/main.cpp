#include <array>
#include <iostream>
int main() {
  std::array<double, 3> arr;
  std::cout << "Enter your first: ";
  std::cin >> arr[0];
  std::cout << "Enter your second: ";
  std::cin >> arr[1];
  std::cout << "Enter your third: ";
  std::cin >> arr[2];
  std::cout << "Times: " << arr.size()
            << "\nAverage grade: " << (arr[0] + arr[1] + arr[2]) / 3 << "\n";
}
