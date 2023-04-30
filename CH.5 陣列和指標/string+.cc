#include <iostream>
#include <string>

int main() {
  std::string a;
  getline(std::cin, a);
  std::cout << a << std::endl;
  std::cout << a.size() << std::endl;
  std::string b = "12345";
  if (a == b) {
    std::cout << "a is equal to b" << std::endl;
  }

  std::cout << a + b << std::endl;

  return 0;
}