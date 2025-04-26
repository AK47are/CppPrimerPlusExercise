#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Enter words (q to quit): \n";
  string word;
  int vowels_number = 0, consonants_number = 0, others_number = 0;
  do {
    cin >> word;
    if (isalpha(word[0])) {
      if (strchr("aeiouAEIOU", word[0]))
        ++vowels_number;
      else
        ++consonants_number;
    } else
      ++others_number;
  } while (word != "q");
  cout << vowels_number << " words beginning with vowels\n"
       << consonants_number << " words beginning with consonants\n"
       << others_number << " others\n";
}
