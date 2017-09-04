#include <stdio.h>
void main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",a);
    else
        printf("%c is not an alphabet.",a);
}
