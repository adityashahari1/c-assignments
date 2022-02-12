/*A positive integer is entered through the keyboard, write a program
to obtain the prime factors of the number. Modify the function
suitably to obtain the prime factors recursively.*/

# include <stdio.h>

void primefac(int x);
void primefac_rec(int x, int count);

int main(){
    int x;
    printf("Enter an integer:\n");
    scanf("%d",&x);

    printf("Prime factors without using recursion:\n");
    primefac(x);

    printf("\n\nPrime factors using recursion:\n");
    primefac_rec(x, 2);

    return 0;
}

void primefac(int x){
    int count;
    
    for(count =2; x>1; count++)
    {
        while(x%count == 0)
        {
            printf("\n%d",count);
            x = x/count;
        }
    }
}

void primefac_rec(int x, int count){
    if(x<=1)
        return;
    
    else if(x%count == 0)
    {
        printf("\n%d",count);
        primefac_rec(x=x/count, count);
    }
    else
    {
        primefac_rec(x, count+1);
    }   
        
}