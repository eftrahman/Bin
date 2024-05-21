#include<stdio.h>
#include<string.h>
int main(){

	int n;
	scanf("%d", &n);
	//n=5;

	char str[n][50];
	char temp[50];

	for(int i=0; i<n; i++){
		printf("word -> %d: ",i);
		fgets(str[i], 50,stdin);
	}

printf("\n----- Output -----\n");
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(str[i], str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	for(int i=0; i<n; i++){
		printf("%s",str[i]);
	}


	return 0;
}
