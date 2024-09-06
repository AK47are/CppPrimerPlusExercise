#include <iostream>
struct CandyBar {
  char brand[20];
  float weight;
  int calories;
};
int main() {
  CandyBar* snack = new CandyBar[2];
  snack[0] = {"Mocha Munch", 2.3, 350};
  snack[1] = {"Test", 3, 3};
  std::cout << snack[0].brand << "\n"
            << snack[0].weight << "\n"
            << snack[0].calories << "\n";
  std::cout << snack[1].brand << "\n"
            << snack[1].weight << "\n"
            << snack[1].calories << "\n";
}
