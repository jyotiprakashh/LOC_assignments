#include<stdio.h>


int gcd(int a, int b)
{
     if(b!=0)
         return gcd(b, a%b); 
     else
         return a; }

int main()
{
     int a, b, result;

     
     scanf("%d %d",&a,&b);

     result = gcd(a,b);
     printf("GCD of %d and %d = %d",a,b,result);

     return 0;
}