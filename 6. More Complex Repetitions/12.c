/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.*/

# include <stdio.h>

int main(){

    int i, count, x, y;
    int num = 30000;

    for(i =1; i<=num; i++)
    {   
        count = 0;

        for(x =1; x*x*x<i; x++)
        {
            for(y =x; x*x*x + y*y*y<=i; y++)
            {
                if(x*x*x + y*y*y == i)
                {
                    count++;
                }
            }
        }
        
        if(count == 2)
        {
            printf("%d\n",i);
        }

    } 

    

    return 0;
}