#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a % 2)
    {
    case 0:
        printf("%d is an EVEN number.\n", a);
        break;
    case 1:
        printf("%d is an ODD number.\n", a);
        break;
    }

    return 0;
}