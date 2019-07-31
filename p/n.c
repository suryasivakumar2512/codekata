#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf(" the num is zero".");
        else
            printf(" the num is possitive num" .");
    }
    else
        printf(" the num is negative num.");
    return 0;
}
