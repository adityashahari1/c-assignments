/*Write a program which performs the following tasks:
- Initialize an integer array of 10 elements in main( )
- Pass the entire array to a function modify( )
- In modify( ) multiply each element of array by 3
- Return the control to main( ) and print the new array elements
- in main( )*/

# include <stdio.h>

void modfiy(int arr[]){
    
    for(int i = 0; i<10; i++)
    {
        arr[i] = arr[i] * 3;
    }

    
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    modfiy(arr);

    for(int i = 0;i <10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
