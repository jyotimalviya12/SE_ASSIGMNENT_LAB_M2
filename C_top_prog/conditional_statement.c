#include <stdio.h>
int main()
{

  int i;

  int choice;

  printf("enter the value of i");

  scanf("\n%d", &i);

  printf("\n%d", i);

  if (i % 2 == 0)

  {

    printf("\n even num", i);
  }

  else

  {

    printf("\n odd num", i);
  }

  printf("\npress 1 for january:");

  printf("\npress 2 for february:");

  printf("\npress 3 for march:");

  printf("\npress 4 for april:");

  printf("\npress 5 for may:");
  printf("\npress 6 for june:");

  printf("\npress 7 for july:");
  printf("\npress 8 for august:");

  printf("\npress 9 for september:");
  printf("\npress 10 for october: ");
  printf("\npress 11 for november: ");

  printf("\npress 12 for december: ");

  printf("11 for november");

  printf("\npress 12 for december:");
  printf("\nenter your choice:");
  scanf("%d", &choice);
  switch (choice)

  {

  case 1:
    printf("january");
    break;
  case 2:
    printf("february");
    break;
    printf("march");
  case 3:

    break;

  case 4:

    printf("april");

    break;

  case 5:

    printf("may");

    break;

  case 6:

    printf("june");

    break;

  case 7:

    printf("july");

    break;

  case 8:

  case 7:

    printf("july");

    break;

  case 8:

    printf("august");

    break;

  case 9:
    printf("september");
    break;

  case 10:

    printf("october");
    break;

  case 11:

    printf("november");
    break;
  case 12:

    printf("december");
    break;
  }
}
