#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is the greatest",a);
    else if (a==b)
    printf("Both numbers are equal");
    else
    printf("%d is the greatest",b);
    return 0;
}
