/*Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30.*/

# include <stdio.h>
# include <math.h>

int main(){
    int a, b;
    float c;

    for(int a = 1; a<=30; a++)
    {
        for(int b = 1; b<=30; b++)
        {
            c = sqrt (a*a + b*b);
            if(c == (int)c)
            {
                printf("(%d,%d,%d)\n",a,b,(int)c);
            }
        }
    }


    return 0;
}