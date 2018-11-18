#include <stdio.h>

int my_strcmp( const char *str1, const char *str2 ) {
    int	ret = 0;

    while ( !( ret = *( unsigned char * )str1 - *( unsigned char * )str2 ) && ( *str1 != '\0' ) )
    {
        ++str1;
        ++str2;
    }

    if ( ret > 0 )
    {
        return	1;
    }
    else if ( ret < 0 )
    {
        return	-1;
    }
    else
    {
        return	0;
    }
}

int	main()
{
    char str1[100] ;
    char str2[100] ;
    gets(str1);
    gets(str2);

    printf( "%d\n", my_strcmp( str1, str2 ) );


    return	0;
}
