#include <stdio.h>

int getSecretNumber(){
  int secretNumber = 7;
  return secretNumber;
  printf("Don’t tell anyone\n");
}

int main(void) {
  printf("%d", getSecretNumber());
}
