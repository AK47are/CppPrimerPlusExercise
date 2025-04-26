#include <iostream>
struct Pizza {
  char brand[20];
  float diameter;
  float weight;
};
int main() {
  Pizza* snack = new Pizza;
  std::cout << "Diameter: ";
  std::cin >> snack->diameter;
  std::cout << "Brand: ";
  std::cin.ignore();
  std::cin.getline(snack->brand, 20);
  std::cout << "Weight: ";
  std::cin >> snack->weight;
  std::cout << "Brand: " << snack->brand << "\nDiameter: " << snack->diameter
            << "\nWeight: " << snack->weight << "\n";
}
