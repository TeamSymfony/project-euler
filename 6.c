#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
        int a;

        long sumofsquare = 0, squareofsum = 0, difference;

        for(a = 1; a <= 100; a++) {
            sumofsquare = sumofsquare + a * a;
        }

        for(a = 1; a <= 100; a++) {
            squareofsum = squareofsum + a;
        }

        squareofsum = squareofsum * squareofsum;

        difference = squareofsum - sumofsquare;

        printf("The correct answer is: %ld\n", difference);
}
