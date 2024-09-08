// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_
#include <cstdlib>
#include <iostream>
typedef unsigned long Item;
class Stack {
 private:
  enum { MAX = 10 };  // constant specific to class
  Item* pitems;       // holds stack items
  int size;           // number of elements in stack
  int top;            // index for top stack item
 public:
  Stack(int n = MAX) {
    pitems = new Item[n];
    for (int i = 0; i < n; ++i) pitems[i] = 0;
    size = n;
    top = n - 1;
  }  // creates stack with n elements
  Stack(const Stack& st) {
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; ++i) pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
  }
  ~Stack() { delete[] pitems; }
  bool isempty() const { return size == 0; }
  bool isfull() const { return size == MAX; }
  // push() returns false if stack already is full, true otherwise
  bool push(const Item& item) {  // add item to stack
    if (MAX == (size + 1)) {
      std::cout << "MAX error!\n";
      return 1;
    }
    Item* temp = new Item[size + 1];
    for (int i = 0; i < size; ++i) temp[i] = pitems[i];
    temp[size] = item;
    delete[] pitems;
    pitems = temp;
    ++size, ++top;
    return 0;
  }
  // pop() returns false if stack already is empty, true otherwise
  bool pop(Item& item) {  // pop top into item
    if (isempty()) return 1;
    Item* temp = new Item[size - 1];
    for (int i = 0; i < size - 1; ++i) temp[i] = pitems[i];
    item = pitems[size - 1];
    delete[] pitems;
    pitems = temp;
    --size, --top;
    return 0;
  }
  Stack& operator=(const Stack& st) {
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; ++i) pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
    return *this;
  }
};
#endif
