/*A machine is purchased which will produce earning of Rs. 1000 per
year while it lasts. The machine costs Rs. 6000 and will have a
salvage value of Rs. 2000 when it is condemned. If 9 percent per
annum can be earned on alternate investments, write a program to
determine what will be the minimum life of the machine to make it
a more attractive investment compared to alternative investment?*/

# include <stdio.h>

int main(){
    int year = 0, invest, alternate;

    while(alternate>invest)
    {
        year++;
        alternate = year*90;
        invest = (1000*year) - 4000;
    }

    printf("The life of machine %d years",year);

    return 0;
}