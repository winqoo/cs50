#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//function declaration to crypt uppercase letters
char cryptUpper(char c, int key);

//function declaration to crypt lowercase letters
char cryptLower(char c, int key);

int main(int argc, string argv[]){
    
    if(2 != argc){
        printf("Usage: ./caesar key");
        
        return 1;
    }
    
    //second line argument
    int k = atoi(argv[1]);
    
    if(k >26){
        k = k%26;
    }
    
    //user input 
    string p = GetString();
    
    //itterate over input characters
    for (int i= 0, n=strlen(p); i < n; i++){
        
        if(isalpha(p[i]))
        {
            if(isupper(p[i])){
                
                p[i] = cryptUpper(p[i], k);
                
            } else{
                
                p[i] = cryptLower(p[i], k);
                
            }
            
        }
        printf ("%c", p[i]);
        
    } printf("\n");
}


char cryptUpper(char c, int key)
{
    int letter = c;
    
   int result =  ((letter + key)-65)%26 + 65;
    
    return (char)result;
}


char cryptLower(char c, int key)
{
    int letter = c;
    
    int result =  ((letter + key)-97)%26 + 97;
    
    return (char)result;
}