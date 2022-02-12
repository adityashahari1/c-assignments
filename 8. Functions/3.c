/*Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.*/

int roman(int);

# include <stdio.h>
int main(){
    int year;
    printf("Enter an year to convert it into roman equivalent:\n");
    scanf("%d",&year);

    roman(year);
    
    return 0;
}

int roman(int num){
    while(num!=0)
    {
        if(num>=1000)
        {
            printf("m");
            num = num - 1000;
        }

        else if(num>=500)
        {
            printf("d");
            num = num - 500;
        }

        else if(num>=100)
        {
            printf("c");
            num = num - 100;
        }

        else if(num>=50)
        {
            printf("l");
            num = num - 50;
        }

        else if(num>=10)
        {
            printf("x");
            num = num - 10;
        }

        else if(num>=5)
        {
            printf("v");
            num = num - 5;
        }

        else if(num>=1)
        {
            printf("i");
            num = num - 1;
        }
    }

}