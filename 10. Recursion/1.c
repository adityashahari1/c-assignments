/*A 5-digit positive integer is entered through the keyboard, write a
recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.*/

// Non recursive 
# include <stdio.h>

int add(int);
int add_rec(int);

int main(){
    int x;
    

    printf("Enter 5 digit integer:\n");
    scanf("%d",&x);

    int ans = add(x);

    printf("Sum of %d without using recursion: %d\n",x,ans);

    int ansr = add_rec(x);

    printf("Sum of %d using recursion: %d\n",x,ansr);

    return 0;
}

int add(int x){
    int sum =0;

    while(x)
    {
        sum += x%10;
        x = x/10;
    }
   
    return (sum);
}

int add_rec(int x){

    if(x)
    {
        return((x%10) + add_rec(x/=10));
    }    
    else
        return (0);

}