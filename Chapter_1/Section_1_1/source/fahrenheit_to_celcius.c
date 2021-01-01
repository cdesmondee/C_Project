#include <stdio.h>


int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("F    |   C\n");
    while(fahr <= upper)
    {
        celcius = (5.0/9.0)*(fahr-32);
        printf("%3.0f\t%6.1f\n",fahr,celcius);
        fahr = fahr + step;
    }
    
    return 0;
}