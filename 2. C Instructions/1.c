/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’)*/

# include <stdio.h>

int main(){
    int num;
    printf("Enter a 5 digit number:");
    scanf("%d",&num);
    int a, b, c, d, e, temp;

    a = num/10000; 
    b = (num/1000)%10;
    c = (num/100)%10;
    d = (num/10)%10; 
    e = num%10; 
    temp = a + b + c + d + e;

    printf("Sum = %d",temp);
  
    return 0;
}
