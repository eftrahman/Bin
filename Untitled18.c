#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	char word[100], c ,x;
	scanf("%[^\n]", word);

   	while(word[n]!='\0'){
   	  c = word[n];
   	  if (c=='b' || c=='B' || c=='c' || c=='C' || c=='d' || c=='D' || c=='f' || c=='F'
        || c=='g' || c=='G' || c=='h' || c=='H' || c=='j' || c=='J' || c=='k' || c=='K' || c=='l' || c=='L'
        || c=='m' || c=='M' || c=='n' || c=='N' || c=='p' || c=='P' || c=='q' || c=='Q' || c=='r' || c=='R'
        || c=='s' || c=='S' || c=='t' || c=='T' || c=='v' || c=='V' || c=='w' || c=='W' || c=='x' || c=='X'
        || c=='y' || c=='Y' || c=='z' || c=='Z')
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
