#include <iostream>

int main(){
  int var = 10;
  int* ptr = &var;

  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;
  *ptr = 20;
  std::cout << var << std::endl;
  var = 30;
  std::cout << *ptr << std::endl;
}