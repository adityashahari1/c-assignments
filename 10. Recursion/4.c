/*A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion*/

# include <stdio.h>

int bin(int num){
    int rem, place =1;
    int bin = 0;

    while(num)
    {
        rem = num%2;
        num = num/2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    return (bin);
}

int bin_rec(int num){
    if(num == 0)  
        return 0;  
    else  
        return((num % 2) + 10 * bin_rec(num/2));
}

int main(){
    int num;

    printf("Enter a decimal number:\n");

    scanf("%d",&num);
    printf("\nBinary equivalent of Decimal no:%d is %d\n",num,bin(num));
    printf("Binary equivalent of Decimal no:%d is %d\n",num,bin_rec(num));

    return 0;
}