#include <algorithm>
#include <cstdio>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
struct Review {
  std::string title;
  int rating;
  double price;
};
bool FillReview(Review& rr);
void ShowReview(const std::shared_ptr<Review> rr);
void SelectShow(std::vector<std::shared_ptr<Review>> books);
int main() {
  using namespace std;
  vector<shared_ptr<Review>> books;
  shared_ptr<Review> temp(new Review);
  while (FillReview(*temp)) {
    books.push_back(temp);
    temp = (shared_ptr<Review>)new Review;
  }
  if (books.size() > 0) {
    cout << "Thank you. You entered the following " << books.size() << " books"
         << endl;
    SelectShow(books);
  } else
    cout << "No entries. ";
  cout << "Bye.\n";
  return 0;
}

bool FillReview(Review& rr) {
  std::cout << "Enter book title (quit to quit): ";
  std::getline(std::cin, rr.title);
  if (rr.title == "quit") return false;
  std::cout << "Enter book rating: ";
  std::cin >> rr.rating;
  std::cout << "Enter book price: ";
  std::cin >> rr.price;
  if (!std::cin) return false;
  // get rid of rest of input line
  while (std::cin.get() != '\n') continue;
  return true;
}

void ShowReview(const std::shared_ptr<Review> rr) {
  std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price
            << std::endl;
}

void SelectShow(std::vector<std::shared_ptr<Review>> books) {
  using namespace std;
  for (char c; c != 'q';) {
    cout << "不排序显示：n" << endl;
    cout << "按字母表顺序显示：a" << endl;
    cout << "按评级升序/降序显示：b/c" << endl;
    cout << "按价格升序/降序显示：d/e" << endl;
    cout << "退出：q" << endl;
    cout << "你的选择：";
    c = cin.get();
    cin.ignore();
    switch (c) {
      case 'n':
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'a':
        sort(books.begin(), books.end(),
             [](shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
               if (r1->title < r2->title)
                 return true;
               else
                 return false;
             });
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'b':
        sort(books.begin(), books.end(),
             [](shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
               if (r1->rating < r2->rating)
                 return true;
               else
                 return false;
             });
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'c':
        sort(books.begin(), books.end(),
             [](shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
               if (r1->rating > r2->rating)
                 return true;
               else
                 return false;
             });
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'd':
        sort(books.begin(), books.end(),
             [](shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
               if (r1->price < r2->price)
                 return true;
               else
                 return false;
             });
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'e':
        sort(books.begin(), books.end(),
             [](shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
               if (r1->price > r2->price)
                 return true;
               else
                 return false;
             });
        std::cout << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        break;
      case 'q':
        return;
    }
  }
}
