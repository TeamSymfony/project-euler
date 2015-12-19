#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
        int a,b,d=1;

        for(a = 2;; a++) {

                bool c = 1;

                for(b = 2; b < sqrt(a) + 1; b++) {

                        if(a % b == 0) {
                                c = 0;
                        }
                }

                if(c) {
                        d = d + 1;
                }

                if(d == 10001) {
                        printf("Found prime: %d\n", a);
                        break;
                }

        }
}
