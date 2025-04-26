#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
void str_upper(std::string& str) {
  for (int i = 0; i < str.size(); ++i) str[i] = toupper(str[i]);
}

int main() {
  std::string temp;
  std::cout << "Enter a string (q to quit): ";
  while (std::cin >> temp && temp != "q") {
    str_upper(temp);
    std::cout << temp << std::endl;
    std::cout << "Next string (q to quit): ";
  }
  std::cout << "Bye." << std::endl;
}
