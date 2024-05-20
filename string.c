#include <stdio.h>
#include <string.h>
void function(char *str){
        int i, j, k;
    char str[100];
    char rev[100];
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    return rev;
}

int main ()
{
	char string[100];
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
    function(string);
	printf("%s", string);
	return 0;
}
