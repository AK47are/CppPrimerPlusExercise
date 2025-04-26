#include <iostream>

#include "golf.h"
int main() {
  golf g[6];
  for (int i = 0; i < 3; ++i) {
    std::cout << "Using the first setgolf()\nSet your name and handdicap: ";
    char name[40];
    int hc;
    std::cin >> name >> hc;
    if (!strcmp(name, "\0")) break;
    setgolf(g[i], name, hc);
    showgolf(g[i]);
    std::cout << "Using the second setgolf().\n";
    if (!setgolf(g[i + 1])) break;
    showgolf(g[i + 1]);
    std::cout << "Reset handicap.\nSet handicap: ";
    std::cin >> hc;
    handicap(g[i + 1], hc);
    showgolf(g[i + 1]);
  }
}
