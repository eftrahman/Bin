#include <stdio.h>
#include <string.h>
int main()
{
    char string[1005];
    int count;
    int t;
    scanf("%d",&t);
    while(t--){
        int sum = 0;
        scanf("%s", string);
        for (count = 0; string[count] != '\0'; count++){
            if ((string[count] >= '0') && (string[count] <= '9')){
                sum += (string[count] - '0');
            }
        }
        if(string[strlen(string)-1]%2==0 && sum%9 == 0){
                printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
