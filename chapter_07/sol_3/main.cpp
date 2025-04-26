#include <iostream>
struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void show(box b) {
  std::cout << b.maker << " " << b.height << " " << b.width << " " << b.length
            << " " << b.volume << "\n";
}
void set(box& b) { b.volume = b.height * b.width * b.length; }
int main() {
  box b{"211", 21, 23, 42, 100};
  show(b);
  set(b);
  show(b);
}
