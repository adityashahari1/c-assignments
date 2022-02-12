/*Write a function to calculate the factorial value of any integer
entered through the keyboard.*/

# include <stdio.h>

int factorial(int);

int main(){
    int x; 
    int sum;
    printf("Enter a digit:\n");
    scanf("%d", &x);

    sum = factorial(x);
    printf("Factorial: %d",sum);

    return 0;
}

int factorial(int a){
    int d = 1;
    
    if(a==0 || a == 1)
    {
        return 1;
    }
    else
    {
        for(int i = 2; i<=a; i++)
        {
            d = d* i;
        }
        return d;
    }

}