/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.(Palindrome)*/

# include <stdio.h>

int main(){
    int n;
    printf("Enter a five digit number");
    scanf("%d",&n);

    int a, b, c, d, e, temp;
    
    a = n/10000;
    b = (n/1000)%10;
    c = (n/100)%10;
    d = (n/10)%10;
    e = n%10;

    temp = e*10000 + b*1000 + c*100 + d*10 + e*1;

    printf("Reversed numbers:%d%d%d%d%d\n",e,d,c,b,a);

    if(n == temp)
        printf("Numbers Are Equal.");
    else    
        printf("Numbers Are Not Equal.");
  
    return 0;
}
