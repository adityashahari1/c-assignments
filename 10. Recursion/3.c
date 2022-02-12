/*Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first few
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...*/

# include <stdio.h>

int fib(int);

int main(){
    int limit;

    printf("Enter an integer;\n");
    scanf("%d",&limit);

    for(int count =1;count<=limit; count++)
    {
        printf("%d\n",fib(count));
    }

    return 0;
}

int fib(int num){
    if(num==1)
    {
        return (0);
    }
    else if(num==2 || num == 3)
    {
        return (1);
    }
    else
    {
        return(fib(num-1)+fib(num-2));
    }
}