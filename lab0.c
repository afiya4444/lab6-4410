#include <stdio.h>
/* demo.c: My first C program */
int main(void)
{
    printf("added a new line");
    //variable declaration
    const int barsInBox = 12;
    int inputBoxes, outputBars;
printf("How many boxes you have:");
scanf("%i", &inputBoxes);
outputBars = inputBoxes*barsInBox;
printf("in a %i boxes you have %i bars", inputBoxes, outputBars);
return 0;
}