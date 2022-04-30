#include <stdio.h>
void swap(int *a,int *b){
   int t=*a;
   *a=*b;
   *b=t;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Before swap a=%d, b=%d",a,b);
    swap(&a,&b);
    printf("After swap a=%d, b=%d",a,b);
    return 0;
}