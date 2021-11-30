/*Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII values vary from 0 to 255.*/

# include <stdio.h>

int main(){
    int num;
    num =1;

    while(num<=255)
    {
        printf("%d = %c\n",num, num);
        num ++;
    }

    return 0;
}
