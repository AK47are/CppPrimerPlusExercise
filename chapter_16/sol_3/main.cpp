#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::string;
std::vector<string> wordlist;
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::tolower;
  std::srand(std::time(0));
  char play;
  cout << "Will you play a word game? <y/n> ";
  cin >> play;
  play = tolower(play);
  string temp;
  std::ifstream fin("wordlist.txt");
  while (fin >> temp) wordlist.push_back(temp);
  const int NUM = wordlist.size();
  while (play == 'y') {
    string target = wordlist[std::rand() % NUM];
    int length = target.length();
    string attempt(length, '-');
    string badchars;
    int guesses = 6;
    cout << "Guess my secret word. It has " << length
         << " letters, and you guess\n"
         << "one letter at a time. You get " << guesses;
    cout << "Will you play another? <y/n> ";
    cin >> play;
    play = tolower(play);
  }
  cout << "Bye\n";
  return 0;
}
