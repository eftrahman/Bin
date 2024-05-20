#include<stdio.h>
void print(int metrix[m][t]) {

int n, m ,t=0;
    scanf("%d",&n);
    char matrix[n][n];
    int matrix_output;
    for(m=0; m<n; m++)
    {
        do {i++;
        while(t<n);
        {if( m==t )
                matrix[m][t] = 0;
            else if( t>m )
                matrix[m][t]=1;
            else
                matrix[m][t]=-1;}
        }
    }

}
int main()
{



    for(m=0; m<n; m++)
    {
        for(t=0; t<n; t++)
        {
			matrix_output = matrix[m][t];
            printf("%d ",matrix_output);
        }
        printf("\n");
    }
    return 0;
}
