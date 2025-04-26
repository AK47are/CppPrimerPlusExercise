#include <iostream>
#include <string>
struct car {
  std::string manufacturer;
  int year;
};

using namespace std;
int main() {
  int num = 0;
  cout << "How many cars do you wish to catalog? ";
  cin >> num;
  cin.ignore();
  car* ptr = new car[num];
  for (int i = 0; i < num; ++i) {
    cout << "Car #" << i + 1 << ":\nPlease enter the make: ";
    getline(cin, ptr[i].manufacturer);
    cout << "\nPlease enter the year made: ";
    cin >> ptr[i].year;
    cin.ignore();
  }
  cout << "Here is your collection\n";
  for (int i = 0; i < num; ++i) {
    cout << ptr[i].year << " " << ptr[i].manufacturer << endl;
  }
}
