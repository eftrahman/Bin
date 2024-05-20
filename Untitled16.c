#include<stdio.h>
#include<string.h>

int main()
{
      int count, length;
      char ch, str[30];
      //printf("\nEnter A String:\t");
      scanf("%[^\n]s", str);
      length = strlen(str);
      for(count = 0; count < length; count++)
      {
            ch = str[count];
            switch(ch)
            {
                  case 'a': printf("\nVowel: %c\n", str[count]); break;
                  case 'e': printf("\nVowel: %c\n", str[count]); break;
                  case 'i': printf("\nVowel: %c\n", str[count]); break;
                  case 'o': printf("\nVowel: %c\n", str[count]); break;
                  case 'u': printf("\nVowel: %c\n", str[count]); break;
                  case 'A': printf("\nVowel: %c\n", str[count]); break;
                  case 'E': printf("\nVowel: %c\n", str[count]); break;
                  case 'I': printf("\nVowel: %c\n", str[count]); break;
                  case 'O': printf("\nVowel: %c\n", str[count]); break;
                  case 'U': printf("\nVowel: %c\n", str[count]); break;
            }
      }
      return 0;
}
