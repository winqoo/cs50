#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[]){
    
    if(2 != argc){
        printf("Usage: ./caesar key");
        
        return 1;
    }
    
    //second line argument
    int k = atoi(argv[1]);
    
    
    int letter = 'z';
    letter += k;
   printf("%c\n", (char)letter);
        
 
    
}



        if(isalpha(p[i]))
        {
            int letter = (int) p[i];
            printf("%c", letter + k);
        }else{
            printf ("%c", p[i]); 
        }
    } printf("\n");

