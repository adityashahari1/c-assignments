/*Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.*/

# include <stdio.h>

int main(){

    int limit, new, range, big, small;
    printf("Enter the limit\n");
    scanf("%d",&limit);

    printf("Enter %d numbers:\n",limit);
    scanf("%d",&new);

    big = small = new;
    limit = limit- 1;
    
    while(limit)
    {
        scanf("%d",&new);
        if (new>big)
        {
            big = new;
        }
        else if(new<small)
        {
            small = new;
        }
        limit--;
    }

    range = big - small;
    printf("Range of the set of numbers: %d\n",range);

    return 0;
}
