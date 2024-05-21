#include<stdio.h>
int main()
{
	int L,R,count;
	int digits;
	scanf("%d %d",&L, &R);


	if (L==R){
		if(L%2==0)
			count = 0;
		else
			count = 1;
	}
	else if(L%2 == 0 && R%2==0){
		L = L-1;
		digits = R-L;
		count = digits/2;
	}
	else if((L%2 == 0 && R%2!=0) || (L%2 != 0 && R%2==0)){
		L = L-1;
		digits = R-L;
		count = digits/2;
	}
	else{
		L = L-1;
		digits = R-L;
		count = digits/2 +1;
	}
	printf("%d\n",count);
}
