#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
        int a,b,d=1;

        for(a = 2; a < 5000; a++) {

                int c = a;

                printf("%4d:", a);

                for(b = 2; b <= c; b++) {

                        if(c % b == 0) {
                                printf("%4d ", b);
                                c = c / b;
                                b = b - 1;
                        }
                }

                printf("\n");

        }
}
