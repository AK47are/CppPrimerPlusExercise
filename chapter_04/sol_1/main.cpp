#include <iostream>
int main() {
  using std::cin;
  using std::cout;
  cout << "What is your first name? ";
  char fn[10];
  cin.getline(fn, 10);
  cout << "What is your last name? ";
  char ln[10];
  cin.getline(ln, 10);
  cout << "What letter grade do you deseve? ";
  char grade;
  cin >> grade;
  int age;
  cout << "What is your age? ";
  cin >> age;
  cout << "Name: " << fn << ", " << ln << "\nGrade: " << grade
       << "\nAge: " << age << std::endl;
}
