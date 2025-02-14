#include <stdio.h>

int main()

{
  int first, sec, third;
  char str[50];

  float divide;

  printf("enter student name:");

  scanf("%s", &str);

  printf("\nenter first num");
  scanf("%d", &first);

  printf("\nenter sec num");

  scanf("%d", &sec);
  printf("\nADDITION ");

  third = first + sec;

  printf("\nsum of first and sec num is %d: ", third);

  printf("\nMULTIPLICATION ");

  divide = first * sec;

  printf("\nmultiply of first and sec num is %.3f: ", divide);
}