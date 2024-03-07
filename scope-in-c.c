#include <stdio.h>

char* myMessage = "This is my global message!";

void myFunc() {
  char* myMessage = "This is my local message!";
  printf("%s\n", myMessage);
}

int main() {
  // You can change `myNumber` to be larger than `50`
  int myNumber = 39;

  if (myNumber <= 50) {
    printf("%d\n", myNumber);
    printf("%s\n", myMessage);
  } else {    
    int myNumber = 500;
    printf("%d\n", myNumber);
    myFunc();
  }
}
