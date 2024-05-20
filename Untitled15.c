#include<stdio.h>
#include<string.h>

int main()
{
      int count, length;
      char str[30];
      printf("\nEnter A String:\t");
      scanf("%[^\n]s", str);
      length = strlen(str);
      for(count = 0; count < length; count++)
      {
            if(str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || str[count] == 'o' || str[count] == 'u' || str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || str[count] == 'O' || str[count] == 'U')
            {
                  printf("Vowel at Position [%d]:\t%c\n", count, str[count]);
            }
      }
      return 0;
}
