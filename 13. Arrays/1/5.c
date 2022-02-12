/*Implement in a program the following procedure to generate prime
numbers from 1 to 100. This procedure is called sieve of
Eratosthenes.

Step 1 Fill an array num[ 100 ] with numbers from 1 to
    100.
Step 2 Starting with the second entry in the array, set all
    its multiples to zero.
Step 3 Proceed to the next non-zero element and set all
    its multiples to zero.
Step 4 Repeat Step 3 till you have set up the multiples of
    all the non-zero elements to zero.
Step 5 At the conclusion of Step 4, all the non-zero entries
    left in the array would be prime numbers, so
    print out these numbers.*/

# include <stdio.h>
# include <math.h>

int main(){
    int arr[100];

    for(int i=0; i<100; i++)
    {
        arr[i] = i+1;
    }

    int n = 100;

    for(int i =1; i<=n; i++)
    {
        if(arr[i] !=0)
        {
            for(int j = pow(arr[i],2); j<=n; j = j + arr[i])
            {
                arr[j-1] = 0;
            }
        }
    }
    printf("\n");

    printf("Sieve of Eratosthenes \n");  
     
    for(int i = 1; i < n; i++)  
    {  
        if(arr[i] != 0)  
        printf("%d ",arr[i]);  
    }  
  
    return 0;   
}