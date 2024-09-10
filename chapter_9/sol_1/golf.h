// golf.h -- for pe9-1.cpp
#include <cstring>
#include <iostream>
const int Len = 40;
struct golf {
  char fullname[Len];
  int handicap;
};
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
inline void setgolf(golf& g, const char* name, int hc) {  // avoid ODR violation
  strcpy(g.fullname, name);
  g.handicap = hc;
}
// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
inline int setgolf(golf& g) {
  std::cout << "Enter fullname and handicap: ";
  std::cin >> g.fullname >> g.handicap;
  return strcmp(g.fullname, "\0");
}
// function resets handicap to new value
inline void handicap(golf& g, int hc) { g.handicap = hc; }
// function displays contents of golf structure
inline void showgolf(const golf& g) {
  std::cout << g.fullname << "\t" << g.handicap << "\n";
}
