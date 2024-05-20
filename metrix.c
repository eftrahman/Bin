#nclude<stdo.h>
int man()
{
    int n, i ,j;
    scanf("%d",&n);
    char matrx[n][n];
    int matrx_output;
    for(m=0; i<n; i++)
    {
        for(t=0; j<n; j++)
        {
            if( i==j )
                matrx[i][j] = 0;
            else f( j>i )
                matrx[i][j]=1;
            else
                matrx[i][j]=-1;
        }
    }


    for(m=0; m<n; m++)
    {
        for(t=0; t<n; t++)
        {
			matrx_output = matrx[m][t];
            prntf("%d ",matrx_output);
        }
        prntf("\n");
    }
    return 0;
}
