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
    
    if(2 != argc ){
        printf("Usage: ./vigenere key");
        
        return 1;
    }
    
    string key = argv[1];
    
    for(int i = 0, n = strlen(key); i <n; i++){
        
        if(isalpha(key[i]) == false){
            
             printf("key has to be all alpabethic");
        
        return 1;
        }
    }
  
    
    //user input 
    string user_input = GetString();
    
   
    //itterate over input characters
    for (int i= 0, key_index=0, j, n=strlen(user_input); i < n; i++){
    
        if(isalpha(user_input[i]))
        {
            if(isupper(user_input[i])){
                
                int shift;
                
                j = key_index%strlen(key);
                int k = key[j];
                
                if(isupper(k)){
                     shift = k-65;
                }else{
                     shift = k-97;
                }
             
                user_input[i] = cryptUpper(user_input[i], shift);
                
                key_index++;
                
            } else{
                
                int shift;
                
                j = key_index%strlen(key);
                int k = key[j];
                 if(isupper(k)){
                     shift = k-65;
                }else{
                     shift = k-97;
                }
                
                user_input[i] = cryptLower(user_input[i], shift);
                key_index++;
            }
            
        }
        printf ("%c", user_input[i]);
        
    }printf("\n"); 
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