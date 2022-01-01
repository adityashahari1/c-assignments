/*Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/

# include <stdio.h>

int main(){
    int num, pos =0, neg =0, zero =0, new;

    printf("How many numbers do you want to enter?\n");
    scanf("%d",&num);

    printf("Enter the numbers:\n");

    while(num)
    {
        scanf("%d",&new);

        if(new>0)
        {
            pos ++;
        }
        else if(new<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        
        num--;
    }

    printf("Count of Positive numbers:%d\n",pos);
    printf("Count of Negative numbers:%d\n",neg);
    printf("Count of Zero entered:%d\n",zero);

    return 0;
}
