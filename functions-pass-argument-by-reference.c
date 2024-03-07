#include <stdio.h>

void myFunc(int* a){
  *a = *a+2;
  printf("a inside myFunc(): %d\n", *a);
}

int main(){
  int a = 10;
  int* aPointer = &a;
  myFunc(aPointer);
  printf("a in main(): %d\n", a);
}

//OUTPUT:
// a inside myFunc(): 12;
// a in main(): 12;
