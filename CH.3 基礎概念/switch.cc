#include <iostream>
using namespace std;

int main() {
  int x = 2;

  switch (x) {
      case 1:
          // 如果 x 等於 1，則執行這裡的程式碼
          cout << "x is equal to 1" << endl;
          break;
      case 2:
          // 如果 x 等於 2，則執行這裡的程式碼
          cout << "x is equal to 2" << endl;
          break;
      default:
          // 如果 x 不等於任何 case 中指定的值，則執行這裡的程式碼
          cout << "x is not equal to 1 or 2" << endl;
  }
  return 0;
}