/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.*/

# include <stdio.h>

int main(){
    float cp, sp, loss, profit;
    printf("Enter cost price and selling price of the product: ");
    scanf("%f%f",&cp,&sp);

    loss = sp - cp;
    profit = cp - sp;

    if(sp>cp)
    {
        printf("Loss of: %f",loss);
    }
    else
    {
        printf("Profit of: %f",profit);
    }

    return 0;
}
