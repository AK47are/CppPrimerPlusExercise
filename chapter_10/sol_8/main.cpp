#include <iostream>
#include <ostream>
typedef int Item;
class List {
 private:
  enum { MAX = 10 };
  Item arr[MAX]{0};
  int size = 0;

 public:
  bool isempty() { return size == 0; }
  bool isfull() { return size == MAX; }
  void append(Item& i) {
    if (size != MAX) arr[size++] = i;
  }
  void visit(void (*pf)(Item&)) {
    for (int i = 0; i < size; ++i) pf(arr[i]);
  }
  void clear() {
    for (int i = 0; i < size; ++i) arr[i] = 0;
    size = 0;
  }
  void show() {
    for (int i = 0; i < size; ++i) std::cout << " " << arr[i];
    std::cout << "\n";
  }
};
void fn(Item& n) { ++n; }

int main() {
  List list;
  Item a = 10;
  std::cout << list.isempty() << std::endl;
  list.append(a);
  list.show();
  list.clear();
  list.show();
  for (int i = 0; i < 10; ++i) list.append(i);
  list.show();
  list.isfull();
  list.visit(fn);
  list.show();
}
