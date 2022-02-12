/*Write a program to pick up the largest number from any 5 row by 5
column matrix.*/

# include <stdio.h>

int main(){
    int arr[5][5] = {

        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}

    };

    int max =arr[0][0];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]>max)
            {
                max= arr[i][j];
            }
        }
    }

    printf("Largest number: %d ", max);

    return 0;
}