/*Write a program that interchanges the odd and even elements of
an array.*/

# include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i+=2)
    {
        int key = i;

        int temp = arr[key];
        arr[key] = arr[key+1];
        arr[key+1] = temp;
    }

    for(int i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}