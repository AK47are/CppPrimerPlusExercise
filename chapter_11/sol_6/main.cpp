#include <iostream>

#include "stonewt.h"
using namespace std;
int main() {
  Stonewt arr[6];
  arr[0].set_stone(2);
  arr[1].set_stone(16);
  arr[2].set_stone(11);
  int temp;
  for (int i = 0; i < 3; ++i) {
    cout << "Set the value: ";
    cin >> temp;
    arr[i + 3].set_stone(temp);
  }
  Stonewt stone11;
  stone11.set_stone(11);
  int num = 0, max = 0, min = 0;
  for (int i = 0; i < 6; ++i) {
    if (arr[i] >= stone11) ++num;
    if (arr[max] < arr[i]) max = i;
    if (arr[min] > arr[i]) min = i;
  }
  cout << ">=11: " << num << "\n";
  arr[max].show_stn();
  arr[min].show_stn();
}
