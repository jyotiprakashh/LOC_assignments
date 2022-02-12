#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius:\n");
    scanf("%d",&r);
    printf("The diamater of the circle is %d\n", 2*r);
    printf("The circumference of the circle is %.2f\n", 2*3.14*r);
    printf("The area of the circle is %.2f\n", 3.14*r*r);


    return 0;
}
