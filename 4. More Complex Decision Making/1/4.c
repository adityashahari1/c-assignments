/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.*/

# include <stdio.h>

int main(){
    int s1, s2, s3, max, valid;
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    int sum1, sum2, sum3;
    sum1 = s2 + s3;
    sum2 = s1 + s3;
    sum3 = s2 + s1;

    max = s1;
    if(s2>s1 && s2>s3)
        s2 = max;

    if(s3>s1 && s3>s2)
        s3 = max;
         
    if(s1== max && s1<sum1)
        valid =1;

    else if(s2== max && s2<sum2)
        valid =1;

    else if(s3== max && s3<sum3)
        valid =1;        

    if(valid == 1)
        printf("Triangle is valid.\n");
    
    else
        printf("Triangle is not valid.\n");
    return 0;
}
