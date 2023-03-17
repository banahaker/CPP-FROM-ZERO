#include <iostream>
using namespace std;

int main() {
  int x = 10;

  if (x > 10) {
      // 如果 x 大於 10，則執行這裡的程式碼
      cout << "x is greater than 10" << endl;
  } else if (x > 5) {
      // 否則，如果 x 大於 5，則執行這裡的程式碼
      cout << "x is greater than 5 but not greater than 10" << endl;
  } else {
      // 否則，執行這裡的程式碼
      cout << "x is not greater than 5" << endl;
  }
  return 0;
}