#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while (*src)
  {
    *dst++ = *src++;
  }
  *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  char dstString[strlen(srcString)];
  copy(dstString, srcString);
  printf("%s\n", dstString);
}
