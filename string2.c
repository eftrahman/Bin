#include <stdio.h>
#include <string.h>

int main ()
{
	char string[100];
  //printf("\n\t Enter the string : ");
	scanf("%s",string);
	char tmp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					tmp = string[i];
					string[i] = string[j];
					string[j] = tmp;
			}
		}
	}
    strrev(string);
	printf("%s", string);
	return 0;
}
