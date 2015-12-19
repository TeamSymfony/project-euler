#include <stdio.h>
#include <math.h>

int main()
{
        long input, i, compound;
        long prime = -1;

        printf("Please insert an integer value: ");
        scanf("%ld", &input);

        compound = input;

        for(i = 2; i < sqrt(input); i++)
        {
            if(compound % i == 0) {
                compound = compound / i;

                if(i > prime) {
                    prime = i;
                }

                i = 2;
            }
        }

        printf("The largest prime factor of %ld is: %ld\n", input, prime);
}
