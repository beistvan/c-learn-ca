#include <stdio.h>

int main() {

int a = 2;
int b = 3;
if (a == b && a == 2) {
  printf("both are true\n");
}
if (a == b || a == 2) {
  printf("one or both are true\n");
}
if (!(a == b)) {
  printf("they are not equal\n");
}

}
