#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main( int argc, char **argv )
{
        if( argc != 2 ) {
                printf("usage: %s n\n", argv[0]);
        } else {

                int a,b;

                int c = atoi(argv[1]);

                for(b = 2; b <= c; b++) {

                        if(c % b == 0) {
                                printf("%d ", b);
                                c = c / b;
                                b = b - 1;
                        }

                }

                printf("\n");

        }

}
