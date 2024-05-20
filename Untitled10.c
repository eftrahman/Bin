#include<stdio.h>
void
recprint(int size)
{
     if(size == 1) {
	  printf("%c\n", '*');
	  return;
     }

     recprint(size - 2);
     for(int i = 0; i < size; ++i)
	  printf("%c", '*');
     putchar('\n');
}
