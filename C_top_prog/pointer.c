#include <stdio.h>
main()
{
  int num = 10;
  int *ptr = &num;
  printf("Before modification:\n");
  printf("Value of num: %d\n", num);
  printf("Address of num: %p\n", (void *)&num);
  printf("Value stored in ptr (address of num): %p\n", (void *)ptr);
  *ptr = 20;
  printf("\nAfter modification using pointer: \n");
  printf("Value of num: %d\n", num);
  printf("Address of num: %p\n", (void *)&num);
  printf("Value stored in ptr (address of num: %p\n"), (void *)ptr;
  return 0;
}