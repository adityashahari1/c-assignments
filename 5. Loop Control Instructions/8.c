/*Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)*/

# include <stdio.h>

int main(){
    
    int decimal, sum, rem ;
    printf("Enter a number:\n");
    scanf("%d",&decimal);

    while (decimal)
    {   
        rem = decimal % 8;
        decimal = decimal/8;
        rem = rem*10;
    }
    printf("Oct %d",rem);
    
    return 0;
}
