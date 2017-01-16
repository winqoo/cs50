/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include<stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

const int max = 65536;
 
bool search(int value, int values[], int n)
{
  
    if (n < 1) {
        return false;
    }   
    
    int middle = n/2;
    
    if(value == values[middle]){
        return true;
    } else if(value < values[middle]){
        int size_l = middle;
        int new_arr_l[size_l];
        for(int i =0; i < size_l; i++){
            new_arr_l[i] = values[i];
        }
        
        return search(value, new_arr_l, size_l);
        
    }else if(value > values[middle]){
        
         int size_r = n - middle+1;
         int new_arr_r[size_r];
         
         for(int j =0, count = middle+1; j<n; j++, count++){
             new_arr_r[j] = values[count];
         }
         
         return search(value, new_arr_r, size_r);
    }
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int tmp_array[max];
    
    for (int i = 0; i < n; i++ ){
        
        tmp_array[values[i]] = 1;
    }
    
    for (int j = 1, counter = 1; j < max; j++){
        if(tmp_array[j] == 1){
            values[counter] = j;
            
            counter++;
        }
    }
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
