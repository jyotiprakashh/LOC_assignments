#include <stdio.h>

int main()
{
    char a[100], b[100], c[100];
    int redg;
    printf("Name-Jyoti Prakash Panda\nRedg no.-004\nBranch-Computer Science and Engineering\nHobbies-Playing sports");
    printf("Enter your name: ");
    gets(a);
    printf("Enter your registration number: ");
    scanf("%d", redg);
    printf("Enter your branch: ");
    gets(b);
    printf("Enter your hobbies: ");
    gets(c);

    printf("Name- %s\n", a);
    printf("Redg no.- %d\n", redg);
    printf("Branch- %s\n", b);
    printf("Hobbies- %s\n", c);

    return 0;
}