#include <cstring>
#include <iostream>
const int Len = 40;
class golf {
 private:
  char fullname[Len];
  int handicap;

 public:
  golf(const char* name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
  }
  golf() {
    std::cout << "Enter fullname and handicap: ";
    std::cin >> fullname >> handicap;
  }
  void set_handicap(int hc) { handicap = hc; }
  void showgolf() { std::cout << fullname << "\t" << handicap << "\n"; }
};

int main() {
  golf* g[6];
  for (int i = 0; i < 3; ++i) {
    std::cout << "Using the first setgolf()\nSet your name and handdicap: ";
    char name[40];
    int hc;
    std::cin >> name >> hc;
    if (!strcmp(name, "\0")) break;
    g[i] = new golf(name, hc);
    g[i]->showgolf();
    std::cout << "Using the second setgolf().\n";
    g[i + 1] = new golf();
    g[i + 1]->showgolf();
    std::cout << "Reset handicap.\nSet handicap: ";
    std::cin >> hc;
    g[i + 1]->set_handicap(hc);
    g[i + 1]->showgolf();
  }
}
