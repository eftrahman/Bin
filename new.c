#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	char word[100], c ,x;
	scanf("%[^\n]", word);

   	while(word[n]!='\0'){
   	  c = word[n];
   	  if (c>'96'&&c<'150'){
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'
   	  	|| c == 'o' || c == 'O' || c == 'u' || c == 'U'){
            break;
            }
   	  }
        printf("%c",c);
        n++;
        }
   	while(word[m]!='\0'){
   	  x = word[m];
   	  if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I'
   	  	|| x == 'o' || x == 'O' || x == 'u' || x == 'U')
   	  	printf("%c", x);
   	    m++;
   	    }
	return 0;
}
