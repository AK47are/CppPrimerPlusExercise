#include <iostream>
void Fill_array(double name[], int length) {
  int i;
  for (i = 0; i < length; ++i) {
    std::cout << "Enter number: ";
    if (!(std::cin >> name[i])) break;
  }
  std::cout << "Input " << i << " numbers.\n";
}

void Show_array(double name[], int length) {
  for (int i = 0; i < length; ++i) std::cout << " " << name[i];
  std::cout << "\n";
}

void Reverse_array(double name[], int length) {
  double temp[length];
  for (int i = 0; i < length; ++i) temp[i] = name[i];
  for (int i = 0; i < length; ++i) name[length - 1 - i] = temp[i];
}

int main() {
  double name[5];
  Fill_array(name, 5);
  Show_array(name, 5);
  Reverse_array(name, 5);
  Show_array(name, 5);
  Reverse_array(name, 5);
  double temp;
  temp = name[0], name[0] = name[4], name[4] = temp;
  Show_array(name, 5);
}
