#include <iostream>

#include "dma.h"
const int CLIENTS = 4;
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  pureDMA* dma[CLIENTS];
  char label[20];
  int rating;
  for (int i = 0; i < CLIENTS; i++) {
    cout << "Enter label: ";
    cin >> label;
    cout << "Enter rating: ";
    cin >> rating;
    cout << "Enter 1 for baseDMA, " << "2 for lacksDMA or 3 for hasDMA: ";
    char kind;
    while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
      cout << "Enter either 1, 2 or 3: ";
    if (kind == '1')
      dma[i] = new baseDMA(label, rating);
    else if (kind == '2') {
      char color[20];
      cout << "Enter color: ";
      cin >> color;
      dma[i] = new lacksDMA(color, label, rating);
    } else if (kind == '3') {
      char style[20];
      cout << "Enter style: ";
      cin >> style;
      dma[i] = new hasDMA(style, label, rating);
    }
    while (cin.get() != '\n') continue;
  }
  cout << endl;
  for (int i = 0; i < CLIENTS; i++) {
    dma[i]->View();
    cout << endl;
  }
  for (int i = 0; i < CLIENTS; i++) {
    delete dma[i];  // free memory
  }
  cout << "Done.\n";
  return 0;
}
