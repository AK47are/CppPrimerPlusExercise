#include <iostream>
using namespace std;
int main() {
  for (char c = '\0'; c != 'q'; cin >> c) {
    switch (c) {  // 很反直觉，switch放前面反而更方便。
      case 'c':
        cout << "Carnivore!\n";
        break;
      case 'p':
        cout << "Pianist!\n";
        break;
      case 't':
        cout << "Tree!\n";
        break;
      case 'g':
        cout << "Game!\n";
        break;
    }
    cout << "Please enter one of the following choices: \n"
         << "c) carnivore\t\tp) pianist\n"
         << "t) tree     \t\tg) game\n"
         << "q) quit\n";
    cout << "Please enter c, p, t, g, q: ";
  }
}
