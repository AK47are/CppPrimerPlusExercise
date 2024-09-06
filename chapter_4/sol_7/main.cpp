#include <iostream>
struct Pizza {
  char brand[20];
  float diameter;
  float weight;
};
int main() {
  Pizza snack;
  std::cout << "Brand: ";
  std::cin.getline(snack.brand, 20);
  std::cout << "Diameter: ";
  std::cin >> snack.diameter;
  std::cout << "Weight: ";
  std::cin >> snack.weight;
  std::cout << "Brand: " << snack.brand << "\nDiameter: " << snack.diameter
            << "\nWeight: " << snack.weight << "\n";
}
