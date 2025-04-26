#include <iostream>
#define HOUR 24
#define MINUTE 60
#define SECOND 60

int main() {
  using std::cin;
  using std::cout;
  long long seconds;
  cout << "Enter the number of seconds: ";
  cin >> seconds;
  cout << seconds << " seconds = " << seconds / (HOUR * MINUTE * SECOND)
       << " days, " << seconds % (HOUR * MINUTE * SECOND) / (MINUTE * SECOND)
       << " hours, "
       << seconds % (HOUR * MINUTE * SECOND) % (MINUTE * SECOND) / (MINUTE)
       << " minutes, "
       << seconds % (HOUR * MINUTE * SECOND) % (MINUTE * SECOND) % (MINUTE)
       << " seconds.\n";
}
