#include <stdio.h>
#include <cs50.h>
#include <string.h>

void Capitalize (char character);

int main(void)
{
    string s =GetString();
    
    Capitalize(s[0]);
    
    for (int i =0, n = strlen(s); i < n; i++)
    {
        if(s[i] == ' ')
        {
         Capitalize(s[i+1]);   
        }
    }
    
    printf("\n");
    return 0;
}

void Capitalize (char character)
{
    if(character >='a' && character <= 'z'){
        printf("%c", character - ('a' - 'A'));
    } else{
        printf ("%c", character);
    }
}
