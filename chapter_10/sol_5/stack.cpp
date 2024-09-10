// stack.cpp -- Stack member functions
#include "stack.h"

#include <iostream>
double Stack::sum = 0;
Stack::Stack()  // create an empty stack
{
  top = 0;
}
bool Stack::isempty() const { return top == 0; }
bool Stack::isfull() const { return top == MAX; }
bool Stack::push(const Item& item) {
  if (top < MAX) {
    items[top++] = item;
    return true;
  } else
    return false;
}
bool Stack::pop(Item& item) {
  if (top > 0) {
    item = items[--top];
    sum += item.payment;
    std::cout << "Current sum: " << sum << std::endl;
    return true;
  } else
    return false;
}
