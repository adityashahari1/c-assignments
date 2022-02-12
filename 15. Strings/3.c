/*Write a program that generates and prints the Fibonacci words of
order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
f(4) = "babba", etc.*/

/* Generate Fibonacci words of order 0 through 5 */
#include <stdio.h>
#include <string.h>

int main( ){

    char str[50];
    char first[50] = "a";
    char second[50] = "b";
    int i;

     printf ("%s\n", first);
     printf ("%s\n", second);

    for (i = 1; i <= 4; i++)
    {
        strcpy (str, second);
        strcat (str, first);
        printf ("%s\n", str);
        strcpy (first, second);
        strcpy (second, str);
    }

    return 0 ;
}