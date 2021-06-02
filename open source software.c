
//Arnav Saxena
//B5
//18103157
# include <stdio.h>
# include <string.h>

int main( )
{

    FILE *filePointer ;

char dataToBeWritten[50] = "Hello there General Kenobi ";
char dataToBeRead[50];


    filePointer = fopen("hello", "w") ;

    if ( filePointer == NULL )
    {
        printf( "Failed to open file" ) ;
    }
    else
    {


        if ( strlen (  dataToBeWritten  ) > 0 )
        {

            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }

        fclose(filePointer) ;

        printf(" successful\n");
}
filePointer = fopen("hello", "r") ;

    if ( filePointer == NULL )
    {
        printf( "Failed to open file" ) ;
    }
 else
    {



        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {

            printf( "%s" , dataToBeRead ) ;
         }

        fclose(filePointer) ;

        printf("Reading successful\n");
    }
    return 0;
}
