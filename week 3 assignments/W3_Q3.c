#include<stdio.h>

int check(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num,a;
    scanf("%d", &num);
    a= check(num);
    if (a==1)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    
    return 0;
}