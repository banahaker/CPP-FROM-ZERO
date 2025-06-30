#include <iostream>

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  numbers[0] = 123;
  for (int i = 0; i<5; i++) {
    std::cout << numbers[i] << std::endl;
  }
  std::cout << *numbers << std::endl;
  std::cout << numbers[2] << " " << *(numbers + 2) << std::endl;
  return 0;
}