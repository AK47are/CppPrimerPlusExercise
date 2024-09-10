#include <cstring>
#include <iostream>
#include <new>
struct chaff {
  char dross[20];
  int slag;
};

int main() {
  char* buffer[100];
  chaff* c = new (buffer) chaff[2];
  strcpy(c[0].dross, "Hello");
  c[0].slag = 1;
  strcpy(c[1].dross, "World");
  c[1].slag = 2;
  for (int i = 0; i < 2; ++i)
    std::cout << c[i].dross << "\t" << c[i].slag << "\n";
}
