#include <stdio.h>
int main()
{
  FILE *file;
  char *text = "Hello, this is a sample string written to the file.";
  file = fopen("sample.txt", "w");
  if (file == NULL)
  {
    printf("Error opening file for writing.\n");
    return 1;
  }
  fprintf(file, "%s", text);
  printf("String written to the file successfully.\n");
  fclose(file);
  file fopen("sample.txt", "r");
  if (file == NULL)
  {
    printf("Error opening file for reading.\n");
    return 1;
    char ch;
    printf("\nReading from the file:\n");
    while ((ch fgetc(file)) != EOF)
    {
      putchar(ch);
      fclose(file);
      return 0;
    }
  }
}
