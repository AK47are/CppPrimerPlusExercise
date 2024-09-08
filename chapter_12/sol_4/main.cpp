#include <iostream>

#include "stack.h"
using namespace std;
int main() {
  Stack stack1(3);
  Stack stack2(stack1);
  while (!stack2.isempty()) {
    Item temp;
    stack2.pop(temp);
    cout << "Temp: " << temp << " ";
  }
  cout << "\n";
  stack2 = stack1;
  stack2.push(4);
  while (!stack2.isempty()) {
    Item temp;
    stack2.pop(temp);
    cout << "Temp: " << temp << " ";
  }
  cout << "\n";
}
