/*10 numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.*/

# include <stdio.h>

int main(){
    int arr[10];
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    printf("Enter 10 numbers:");

    for(int i =0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<10; i++)
    {   
        if(arr[i] == 0)
        {
            zero++;
        }

        else if(arr[i]>0)
        {
            pos++;
        }

        else if(arr[i]<0)
        {
            neg++;
        }


        if(arr[i]==0)
        {
            
        }
        
        else if(arr[i]%2==0)
        {
            even++;
        }

        else 
        {
            odd++;
        }
    }


    printf("\nPositive: %d\n", pos);  
    printf("Negative: %d\n", neg);  
    printf("Even: %d\n", even);  
    printf("Odd: %d\n", odd);  
    printf("Zero: %d\n", zero);

    return 0;
}