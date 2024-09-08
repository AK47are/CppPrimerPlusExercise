#include <cstring>
#include <iostream>
class Cow {
 private:
  char name[20];
  char* hobby;
  double weight;

 public:
  Cow(){};
  Cow(const char* nm, const char* ho, double wt) : weight(wt) {
    hobby = new char[20];
    strcpy(name, nm);
    strcpy(hobby, ho);
  }
  Cow(const Cow& c) : weight(c.weight) {
    hobby = new char[20];
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
  };
  ~Cow() { delete hobby; };
  Cow& operator=(const Cow& c) {
    hobby = new char[20];
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
  }
  void ShowCow() const {
    std::cout << "Name: " << name << "\nHobby: " << hobby
              << "\nweight: " << weight << "\n";
  }
};

int main() {
  Cow cow1;
  Cow cow2("AL", "QQ", 19);
  Cow cow3(cow2);
  cow1 = cow2;
  cow1.ShowCow();
}
