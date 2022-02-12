/*Write a program that converts a string like "124" to an integer 124.*/

# include <stdio.h>
# include <strings.h>

/* A function atoi() converts string to an int */

int main()
{
    char str[6] ;
    int num = 0, i ;
    

    printf("Enter a string containing a number: ");
    scanf("%s", str) ;

    for(i = 0; str [i] != '\0'; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        num = num * 10 + ( str[i] - 48);

        else
        {
            printf("Not a valid string\n");
            return 1 ;
        }
    }

    printf("The number is: %d\n", num);
    return 0;

}