#include <stdio.h>

int main()
{
        int i;
        int sum = 0;
        int input;

        printf("Please insert an integer value: ");
        scanf("%d", &input);

        for(i = 0; i < input; i++)
        {
                if(i % 3 == 0 || i % 5 == 0) {
                        sum = sum + i;
                }
        }

        printf("The answer is %d\n", sum);
}
