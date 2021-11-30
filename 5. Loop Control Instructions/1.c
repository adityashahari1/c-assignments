/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour.*/

# include <stdio.h>

int main(){
    int hours, count, ot;
    count = 1;
    ot = 0;

    while(count<=10)
    {
        
        printf("Enter number of hours employee %d has worked\n", count);
        scanf("%d", &hours);

        if(hours>40)
        {   
            ot = ot + (hours - 40);
            printf("Employee %d has worked %d hours\n", count, hours);
            printf("Overtime pay is %d\n\n", (hours-40)*12);
        }          
        else
        {
            printf("Employee %d has worked %d hours\n", count, hours);
            printf("No overtime pay for employee %d\n\n", count);
        }        
        count ++;
   }
    printf("Total overtime pay = %d\n",ot*12);

    return 0;
}
