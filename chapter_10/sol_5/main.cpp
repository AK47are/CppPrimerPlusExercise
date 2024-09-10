
#include "stack.h"

int main() {
  Stack stack;
  customer temp;
  stack.push(customer{"Amy", 2});
  stack.push(customer{"Sam", 4});
  stack.push(customer{"Kim", 12.5});
  stack.pop(temp);
  stack.push(customer{"Joe", 7.8});
  stack.push(customer{"Lee", 5.5});
  stack.pop(temp);
}
