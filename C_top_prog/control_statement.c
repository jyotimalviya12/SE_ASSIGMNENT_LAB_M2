#include <stdio.h>
main()
{
  for (int i = 1; i <= 10; i++)
  {
    if (i == 5)
    {
    }
    break;            // Exit the Loop when i equals 5
    printf("%d ", i); // Output will be 1 2 3 4
  }
#include <stdio.h>

  for (int i = 1; i <= 10; i++)
  {
    if (i == 3)
    {
    }
    continue;        // Skip printing the number 3
    printf("%d", i); // Output will be 1 2 4 5 6 7 8 9 10
  }
