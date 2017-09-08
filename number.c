#include <stdio.h>
 
int main()
{
    char    s[100];
    int count,Alphabet,Special,Spaces;
    int c;
    count=Alphabet=Special=Spaces=0;
 
    printf("Enter a string: ");
    gets(s);
 
    for(c=0;s[c]!=NULL;c++)
    {
 
        if(s[c]>='0' && s[c]<='9')
            count++;
        else if((s[c]>='A' && s[c]<='Z')||(s[c]>='a' && s[c]<='z'))
            Alphabet++;
        else if(s[c]==' ')
            Spaces++;
        else
            Special++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",count,Alphabet,Spaces,Special);
 
    return 0;
}
