/*Write a program using pointers to find the smallest number in an
array of 25 integers.*/

# include <stdio.h>

int main(){
    int arr [10] = {10, 9, 7, 2, 4, 5, 2, 1, 8, 9};

    int *min = &arr[0];

    for(int i =0; i<10; i++)
    {
        if (arr[i]<*min)
        {
            *min = arr[i];
        }
    
    }

    printf("%d ", *min);

    return 0;
}