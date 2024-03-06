#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
  float number = 4.5;
  char letter = 'a';
  printf("%f\n", ceil(number)); // 5.000000
  printf("%f\n", log(number)); // 1.504077
  printf("%d\n", isupper(letter)); // 0
  letter = toupper(letter);
  printf("%d\n", isupper(letter)); // 1
}

