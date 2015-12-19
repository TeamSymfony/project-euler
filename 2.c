#include <stdio.h>

int main()
{
        int a = 1;
        int b = 1;

        int sum = 0;

        int c = 0;

        int input;

        printf("Please insert an integer value: ");
        scanf("%d", &input);

        while(c < input)
        {
                c = a + b;
                a = b;
                b = c;

                if(c % 2 == 0) {
                        sum = sum + c;
                }
        }

        printf("The sum of even fibonacci numbers up to 1M is: %d\n", sum);
}
