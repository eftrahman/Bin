#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    char feetS[100];
    int i;
    int t;
    scanf("%d",&t);
    while(t--){
        int feet;
        scanf("%s", string);
        for (i = 0; string[i] != '.'; i++){
            feetS[i]=string[i];
            //printf("%c\n",string[i]);
            //if ((string[i] >= '0') && (string[i] <= '9')){
                //sum = (string[i] - '0');
            }
            //printf("%s\n",feetS);
            //printf("%d",sum);
            feet=atoi(feetS);
        printf("%d",feet);
        }
    return 0;
}
