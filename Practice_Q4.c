int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

 
   
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            printf("%c is a Consonant.\n", ch);
        }
    
   
    return 0;
}