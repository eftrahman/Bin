#include <stdio.h>

int main()
{
	int limt = 0;
	char word[100], c;

	printf("Enter a string: ");
	scanf("%[^\n]", word);

   	while(word[limt] != '\0') {
   	  c = word[limt];
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U')
   	  	printf("%c", c);
   	  limt++;
   	  }
	return 0;
}
