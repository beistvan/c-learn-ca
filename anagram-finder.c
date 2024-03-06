#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  for (int i = 0; i < strlen(s1); i++)
      if (s1[i] != ' ') counter1[s1[i] - 97]++;
  for (int i = 0; i < strlen(s2); i++)
      if (s2[i] != ' ') counter2[s2[i] - 97]++;   
  int flag = 0;
  for (int i = 0; i < 4; i++)
      if (counter1[i] != counter2[i]) {
        flag = 1;
        break;
      }
  if (!flag)
    printf("Anagram!");
  else
    printf("Not Anagram!");
}
