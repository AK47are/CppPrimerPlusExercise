#include <cstring>
#include <iostream>
using namespace std;
#include <cstring>  // for strlen(), strcpy()
struct stringy {
  char* str = nullptr;  // points to a string
  int ct;               // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy& str, const char* c) {
  if (str.str != nullptr) delete[] str.str;
  str.ct = strlen(c);
  str.str = new char[str.ct + 1];
  strcpy(str.str, c);
}

void show(stringy& str, int n = 1) {
  for (int i = 0; i < n; ++i) cout << str.str << endl;
}
void show(const char* str, int n = 1) {
  for (int i = 0; i < n; ++i) cout << str << endl;
}
int main() {
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing);  // first argument is a reference,
                        // allocates space to hold copy of testing,
                        // sets str member of beany to point to the
                        // new block, copies testing to new block,
                        // and sets ct member of beany
  show(beany);          // prints member string once
  show(beany, 2);       // prints member string twice
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);     // prints testing string once
  show(testing, 3);  // prints testing string thrice
  show("Done!");
  return 0;
}
