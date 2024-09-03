#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T, int n>
class QueueTp {
 private:
  T* pt[n];

 public:
  QueueTp() {
    for (int i = 0; i < n; ++i) pt[i] = nullptr;
  }
  T*& operator[](int i) { return pt[i]; }
  ~QueueTp() {}
};
#endif
