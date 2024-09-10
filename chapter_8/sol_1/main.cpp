#include <iostream>
#include <ostream>
void show(const char* str, int i = 0) {
  static int call_times = 0;
  if (i != 0)
    for (int i = 0; i < call_times; ++i) std::cout << str << std::endl;
  else
    std::cout << str << std::endl;
  ++call_times;
}
int main() {
  show("Hello");
  show("Hello", 1);
  show("Hello", 323);
  show("Hello");
}
