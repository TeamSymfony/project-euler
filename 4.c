#include <stdio.h>
#include <math.h>

int main()
{
        int a,b;

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
                        printf("%d", n);
                    }
                }

            }
        }
}
