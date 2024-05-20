#include <stdio.h>
#include <stdbool.h>

void pyramid( FILE *f, unsigned int n )
{
    static int width = 0;

    if ( n )
    {
        ++width;
        pyramid( f, n - 1 );

        for ( unsigned int i = 0; i < 2 * n - 1; i++ )
        {
            fprintf( f, "%*c", i == 0 ? width : 1, '*' );
        }

        fputc( '\n', f );

        --width;
    }
}

int main(void)
{
    while ( true )
    {
        printf( "Enter a non-negative number (0 - exit): " );

        unsigned int n;

        if ( scanf( "%u", &n ) != 1 || n == 0 ) break;

        putchar( '\n' );

        pyramid( stdout, n );

        putchar( '\n' );
    }

    return 0;
}
