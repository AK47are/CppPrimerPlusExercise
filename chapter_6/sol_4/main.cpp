#include <iostream>
using namespace std;
struct BOP {
  static const int strsize = 20;
  char fullname[strsize];  // real name
  char title[strsize];     // job title
  char bopname[strsize];   // secret BOP name
  int preference;          // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
  BOP bop[5] = {{"John Doe", "Developer", "CodeMaster", 0},
                {"Jane Smith", "Manager", "LeadLady", 1},
                {"Alice Johnson", "Analyst", "DataQueen", 2},
                {"Bob Brown", "Engineer", "TechGuru", 1},
                {"Eve White", "Designer", "PixelArtist", 0}};
  for (char c = '\0'; c != 'q'; cin >> c) {
    switch (c) {
      case 'a':
        for (int i = 0; i < 5; ++i) cout << bop[i].fullname << endl;
        break;
      case 'b':
        for (int i = 0; i < 5; ++i) cout << bop[i].title << endl;
        break;
      case 'c':
        for (int i = 0; i < 5; ++i) cout << bop[i].bopname << endl;
        break;
      case 'd':
        for (int i = 0; i < 5; ++i) switch (bop[i].preference) {
            case 0:
              cout << bop[i].fullname << endl;
              break;
            case 1:
              cout << bop[i].title << endl;
              break;
            case 2:
              cout << bop[i].bopname << endl;
              break;
          }
        break;
      default:
        if (c != '\0') {
          cout << "Noting happen!(press Enter to restart)\n";
          cin.ignore();
          cin.get();
        }
    }
    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name   \tb. display by title\n"
         << "c. display by bopname\td. display by preference\n"
         << "q. quit\n"
         << "Enter your choice: ";
  }
}
