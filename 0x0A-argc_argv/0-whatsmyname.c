#include <stdio.h>
#include <stdlib.h>
/*
 *program that prints its name
 *returns 0
 */
int main (int argc, char* argv[])
{
     int i;
  
     for (i = 0; i < argc; i++)
     {
       printf("%s\n", argv[0]);
     }

     return 0;

}
