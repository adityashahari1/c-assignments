/*Write a recursive function to obtain the running sum of first 25
natural numbers.*/

#include<stdio.h>  
  
int sum(int num)  
{  
    if(num)  
        return(num + sum(num-1));  
    else  
        return 0;  
}  
  
int main()  
{  
    int count = 25;  
  
    printf("Sum of 1st 25 natural numbers is %d\n", sum(count));  
  
    return 0;  
}  
