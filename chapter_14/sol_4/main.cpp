#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

class Person {
 private:
  std::string first_name;
  std::string last_name;

 public:
  Person() : first_name("No name"), last_name("No name") {}
  Person(std::string& fn, std::string& ln) : first_name(fn), last_name(ln) {}
  virtual void Show() { std::cout << first_name << " " << last_name << "\n"; }
  virtual void Set() {
    std::cout << "first_name: ";
    std::cin >> first_name;
    std::cout << "\n";
    std::cout << "last_name: ";
    std::cin >> last_name;
    std::cout << "\n";
  }
  virtual ~Person() {
  }  // 切记使用指针引用派生类时手动添加析构函数，否则会出现无效指针！！！
};

class Gunslinger : virtual public Person {
 private:
  double draw_speed;
  double gun_wear;

 public:
  Gunslinger() : Person(), draw_speed(0), gun_wear(0) {}
  Gunslinger(std::string& fn, std::string& ln, double& ds, double& gw)
      : Person(fn, ln), draw_speed(ds), gun_wear(gw) {}
  double Draw() { return draw_speed; }
  virtual void Set() {
    Person::Set();
    std::cout << "draw_speed: ";
    std::cin >> draw_speed;
    std::cout << "\n";
    std::cout << "gun_wear: ";
    std::cin >> gun_wear;
    std::cout << "\n";
  }
  virtual void Show() {
    Person::Show();
    std::cout << "draw_speed: " << draw_speed << "\ngun_wear: " << gun_wear
              << "\n";
  }
};

class PokePlayer : virtual public Person {
 public:
  int Draw() { return rand() % 52 + 1; }
};

class BadDube : public Gunslinger, public PokePlayer {
 public:
  BadDube() {}
  BadDube(std::string& fn, std::string& ln, double& ds, double& gw)
      : Gunslinger(fn, ln, ds, gw) {}
  double Gdraw() { return Gunslinger::Draw(); }
  int Cdraw() { return PokePlayer::Draw(); }
  virtual void Show() { Gunslinger::Show(); }
  virtual void Set() { Gunslinger::Set(); }
};

const int SIZE = 5;
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  int ct;
  Person* lolas[SIZE];
  for (ct = 0; ct < SIZE; ct++) {
    char choice;
    cout << "Enter the employee category:\n"
         << "p: Person\tg: Gunslinger\to: PokePlayer\tb: BadDube\tq: quit\n";
    cin >> choice;
    while (strchr("pgobq", choice) == NULL) {
      cout << "Please enter p g, o, b, or q: ";
      cin >> choice;
    }
    if (choice == 'q') break;
    switch (choice) {
      case 'p':
        lolas[ct] = new Person;
        break;
      case 'g':
        lolas[ct] = new Gunslinger;
        break;
      case 'o':
        lolas[ct] = new PokePlayer;
        break;
      case 'b':
        lolas[ct] = new BadDube;
        break;
    }
    cin.get();
    lolas[ct]->Set();
  }
  cout << "\nHere is your staff:\n";
  int i;
  for (i = 0; i < ct; i++) {
    cout << endl;
    lolas[i]->Show();
  }
  for (int i = 0; i < ct; i++) delete lolas[i];
  cout << "Bye.\n";
  return 0;
}
