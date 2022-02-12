/*Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight.*/

# include <stdio.h>

int main(){

    int h;

    for(h=0; h<=23; h++)
    {
        if(h==0)
        {
            printf("12 Am Midnight\n");
            continue;
        }

        if(h<=11)
        {
            printf("%d Am\n",h);
        }

        if(h==12)
        {
            printf("12 Pm Afternoon\n");
        }

        if(h>12)
        {
            printf("%d Pm\n",h%12);
        }

    }


    return 0;
}