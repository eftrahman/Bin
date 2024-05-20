#include<stdio.h>
int main()
{
    int I[10];
    //int sizearray = sizeof(I);
    //printf("size of array=%d\n",sizearray);
    //printf("\nsize of array=%d\n",sizeof(I));
    //printf("%d %d\n",I[0],I[1]);      //garbage value     garbage value       garbage value
    //char vowel[]={'a','e','i','o','u'};
    //int sizevowel = sizeof(vowel);
    //printf("size=%d",sizevowel);
    int i,j;
    for(i=0;i<=9;i++){
        scanf("%d",&I[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",I[i]);
        printf(" ");
    }
    int max = -1;
    int min = 100;
    for(i=0;i<10;i++){
        if(I[i]>max){
            max = I[i];
        }
        if(I[i]< min){
            min = I[i];
        }
    }
    printf("\nMax = %d\nMin = %d",max,min);

    return 0;
}
