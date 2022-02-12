/*Write a program to copy the contents of one array into another in
the reverse order.*/

# include <stdio.h>

void Reverse(int arr[]);

int main(){
    int arr[5];

    printf("Enter 5 array elements:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    Reverse(arr);

    return 0;
}

void Reverse(int arr[]){
    int rev[5];
    int i, j;

    for(i = 5 - 1, j = 0; i >= 0; i--, j++)  
        rev[j] = arr[i];  

    for(int i = 0; i<=4; i++)
    {
        printf("%d ", rev[i]);
    }

}