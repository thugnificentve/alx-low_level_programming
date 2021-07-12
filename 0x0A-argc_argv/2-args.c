#include <stdio.h>
/*
 *program that prints all arguments it receives.
 *main - contains argc and argv functions
 *@argc contains number of arguments passed
 *@argv stores arguments passed in an array
 */
int main(int argc, char *argv[])
{
  int i;
  for (i = 0; i < argc; i++)
  {
    printf("%s\n",argv[i]);
  }
  return (0);
}
  
