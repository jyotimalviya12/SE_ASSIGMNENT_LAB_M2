#include <stdio.h>

int main()
{

  int first, sec, third;
  int mul, divide;
  printf("PERFORM ARITHMTIC OPERATION:");
  printf("\nADDITION ");
  printf("\nenter first num ");
  scanf("%d", &first);
  printf("\nenter sec num");
  scanf("%d", &sec);
  third = first + sec;
  printf("\nsum of first and sec num is %d: ", third);
  printf("\nMULTIPLICATION ");
  mul = first * sec;
  printf("\nmultiply of first and sec num is %d: ", mul);
  printf("\nDIVIDE ");
  divide = first / sec;
  printf("\nmultiply of first and sec num is %d: ", divide);
  printf("\nPERFORM RELATIONAL OPERATOR:");
  if (first >= sec)
    printf("\na is greater %d", first);
  else
    printf("\nb is greater %d", sec);
  printf("\nPERFORM LOGICAL OPERATION:");
  if (first && sec)
    printf("\nfirst and sec num both are equal:");
  else
    printf("\nnot both are equal :");
}