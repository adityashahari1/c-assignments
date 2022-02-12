/*If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.*/

# include <stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 array elements:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n = 5;  //array size

    int start = 0, end = n-1;

    
    while(start < end)
    {
        if(arr[start] == arr[end])
        { 
            printf("%d \n", arr[start]);
        }

        start++;
        end--;
    }


    return 0;
}