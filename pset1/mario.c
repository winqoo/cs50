#include <cs50.h>
#include <stdio.h>

int main(void)
{
   
    int height;
    
  
    do
    {
        printf("Height:");
        height = GetInt();
    }
    // while(height <= 0 );
    while(height >23 || height <0);
    char blank = ' ';
    
    for(int i = 0; i <height; i++)
    {
        for(int j =height+1 ; j > 0; j--)
        {
            if (j <=i+2)
            {
                printf("#");
               
            }
            else{
                
                printf("%c", blank);
        }
    
      }
      printf("\n");
    }
    
    return 0;
}