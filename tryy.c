#include<stdio.h>
void function(char *string);

/*int main(void)
{
    char string[] = {"0101notACharacter0111000"};
    fgets(string, sizeof(string), stdin);
    //gets(string);
    function(string);
    printf("%s", string);
    }*/
 int main(){
 char string[50];
 gets(string);
 function(string);
 printf("%s", string);
 }


//    return 0;
//}
void function(char *string)
{
    char *in = string;
    char *out = string;

    while (*in)
    {
        if(*in == '0' || *in == '1')
        {
            *out = *in;
            out++;
            in++;
        }
        else in++;
    }
    *out = '\0';
    string = out;
}
