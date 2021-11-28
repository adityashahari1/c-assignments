/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.*/

# include <stdio.h>
# include <math.h>

int main(){ 
    int a, b, c;
    printf("Enter three sides of the triangle:\n");
    scanf("%d%d%d",&a, &b, &c);

    if((a == b && a!=c) || (a == c && a!=b) || b == c && b!=a)
        printf("Isosceles Triangle.\n");
    
    else if(a==b && b==c)
        printf("Equilateral Triangle.\n");

    else if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(b,2) + pow(c,2) == pow(a,2)) || (pow(a,2) + pow(c,2) == pow(b,2)))
        printf("Right Angled Triangle.\n");
    
    else if(a!=b && a!=c && b!=c)
        printf("Scalene Triangle.\n");

    return 0;
}
