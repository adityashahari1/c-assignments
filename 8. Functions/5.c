/*A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
factors of 35 are 5 and 7.*/

# include <stdio.h>

void factors(int);

int main(){ 
    int x;
    printf("Enter a positive integer:\n");
    scanf("%d", &x); 
    factors(x);

    return 0;
}

void factors(int a){

    int count;

    printf("\nPrime Factors of %d are\n",a);
    for(count = 2; a>1; count++)
    {
        while(a % count == 0)
        {
            printf("%d ",count);
            a = a/count;
        }
    }
}