#include <stdio.h>
#include <math.h>

int main()
{
        int a,b,answer=0;

        for(a = 999; a > 99; a--) {
            for(b = 999; b > 99; b--) {
                int c = a * b;
                int reverse = 0, n;

                n = c;
                while(n != 0)
                {
                    reverse = reverse * 10;
                    reverse = reverse + n % 10;
                    n = n / 10;

                    if(c == reverse) {
                        if(c > answer) {
                            answer = c;
                        }
                    }
                }

            }
        }

        printf("The correct answer is: %d\n", answer);
}
