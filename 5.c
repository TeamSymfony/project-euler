#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
        int a,b,c;

        for(a = 1;; a++)
        {
                bool c = 1;
                for(b = 2; b <= 20; b++) {
                        if(a % b != 0) {
                            c = 0;
                        }
                }

                if(c) {
                        printf("The correct answer is: %d\n", a);
                        break;
                }

        }
}
