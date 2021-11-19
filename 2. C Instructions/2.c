/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

# include <stdio.h>

int main(){
    int num;
    printf("Enter a five digit number:");
    scanf("%d",&num);

    int a, b, c, d, e;
    a = num/10000;
    b = (num/1000)%10;
    c = (num/100)%10;
    d = (num/10)%10;
    e = num%10;

    printf("%d%d%d%d%d",e,d,c,b,a);
  
    return 0;
}
