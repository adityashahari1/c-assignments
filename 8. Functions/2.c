/*Write a function power ( a, b ), to calculate the value of a raised to
b.*/

# include <stdio.h>
# include <math.h>

int fupower(int, int);

int main(){
    int x,y;
    printf("Enter two digits\n");
    scanf("%d%d",&x, &y);

    int ans = fupower(x,y);
    printf("Answer: %d",ans); 

    return 0;
}

int fupower(int a, int b){
    int d;
    d= pow(a,b);
    return d;
}