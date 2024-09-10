#include <cstring>
#include <iostream>
class Plorg {
 private:
  char name[20] = "Plorg";
  int CI = 50;

 public:
  Plorg() {}
  Plorg(const char* n, int c) {
    strcpy(name, n);
    CI = c;
  }
  void set_CI(int n) { CI = n; }
  void show() { std::cout << name << "\t" << CI << "\n"; }
};

int main() {
  Plorg test1;
  test1.show();
  Plorg test2("AM", 75);
  test2.show();
  test2.set_CI(100);
  test2.show();
}
