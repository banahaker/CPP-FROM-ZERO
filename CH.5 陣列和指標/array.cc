#include <iostream>
using namespace std;

int main() {
  int numbers[5] = {0};
  numbers[0] = 123;
  for (int i = 0; i<5; i++) {
    cout << numbers[i] << endl;
  }
  return 0;
}