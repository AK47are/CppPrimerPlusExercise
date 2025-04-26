#include <iostream>
int main() {
  using std::cin;
  using std::cout;
  int degrees, minutes, seconds;
  cout << "Enter a latitude in degrees, minutes, and seconds\n"
       << "First, enter the degrees: ";
  cin >> degrees;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds
       << " seconds = " << degrees + (float)minutes / 60 + (float)seconds / 3600
       << " degrees.\n";
}
