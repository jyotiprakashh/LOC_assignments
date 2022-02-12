#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number:\n");
    scanf("%d", &num);
    if (num < 0)
        printf("The number is negative\n");

    else if (num > 0)
        printf("The numner is positve");

    else
        printf("The number is zero");

    return 0;
}