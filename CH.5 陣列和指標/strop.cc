#include <iostream>

size_t strlen(const char* str){
  size_t result = 0;
  while(str[result] != '\0') {
    result++;
  }
  return result;
}

int strcmp(const char *f, const char *s) {
  size_t i=0;
  while (i <= strlen(f)) {
    if (f[i] != s[i]) {
      return (f[i] - s[i]);
    }
    i++;
  }
  return 0;
}

int main() {
  const char* a = "is this a good choice?";
  std::cout << strlen(a) << std::endl;

  const char* fist = "lazp";
  const char* second = "lazp";
  std::cout << strcmp(fist, second) << std::endl;
  
  return 0;
}
