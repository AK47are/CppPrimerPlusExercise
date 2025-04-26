#include <cstring>
#include <iostream>
struct CandyBar {
  char brand[30];
  float weight;
  int heat;
};

void set(CandyBar& c, const char* b = "Millennium Munch", double w = 2.85,
         int h = 350) {
  strcpy(c.brand, b);
  c.weight = w;
  c.heat = h;
}

inline void show(const CandyBar& c) {
  std::cout << c.brand << "\t" << c.weight << "\t" << c.heat << std::endl;
}

int main() {
  CandyBar candy;
  set(candy);
  show(candy);
  set(candy, "Hello", 114, 514);
  show(candy);
}
