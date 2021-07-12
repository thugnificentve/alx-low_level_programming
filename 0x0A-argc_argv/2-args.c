#include <stdio.h>

/*
 *main - prints all arguments it recieves
 *@argc: contains number of arguments passed
 *@argv: stores arguments passed in an array
 *
 *return: always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
