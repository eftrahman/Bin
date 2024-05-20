#include <stdio.h>
int main()
{	int n,a,x=0,y=1;
	int pow;
	int sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){a=x*y;
                         x=x+y;
                         y=x+y;
		pow=func(a,i+1);

		if((i+1)%2==0){
			sum=sum-pow;
			}
		else{
			sum=sum+pow;
			}
	}

	printf("%d\n",sum);
	return 0;
}
int func(int ab, int c){
	int sum=1;
	for(int i=0;i<c;i++){
		sum=sum*ab;
	}
	return sum;
}
