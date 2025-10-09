#include <stdio.h>
int main() {
  int passwordLength = 5;

  printf("%d\n", passwordLength >= 8); // 0 (false), too short
  printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters

  return 0;
}
  