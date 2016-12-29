#include <cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    int coins = 0;
    int result =0;
    float input;
    int change;

    
    do{
    printf("O hai! How much change is ");
    input = GetFloat();
    }while(input < 0);
    
    change = round(input*100);
    
  if(change >=25)
  {
      coins = change/25;
      
      change = change%25;
      result +=round(coins);
      coins = 0;
  }
   
  if(change >= 10)
  {
      coins = change/10;
       
      change = change%10;
      result += round(coins);
      coins = 0;
  }
   
  if(change >= 5)
  {
      coins = change/5;
       
      change = change%5;
      result += round(coins);
      coins = 0;
  }
   
  if(change >= 1)
  {
      coins = change/1;
       
      change = change%1;
      result += round(coins);
      coins = 0;
  }
    
    printf("%d\n", result);
}