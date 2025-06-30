#include <iostream>
#include <cstring>

int main() {
  char str1[5]; 
  str1[0] = 'L';
  str1[1] = 'a';
  str1[2] = 'z';
  str1[3] = 'p';
  str1[4] = '\0';

  char str2[50] = "Lazp";

  const char *str3  = "Lazp";
  

  std::cout << str1 << std::endl;
  std::cout << str2 << std::endl;
  std::cout << str3 << std::endl;
  std::cout << strlen(str1) << std::endl;
  strcat(str2, str3);
  std::cout << str3 << std::endl;
  
  char *first_str = "lazp";
  char *second_str = "lazp";
  std::cout << strcmp(first_str, second_str) << std::endl;
}