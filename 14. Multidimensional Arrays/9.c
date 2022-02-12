/*Sudoku is a popular number-placement puzzle (refer Figure 14.9).
The objective is to fill a 9×9 grid with digits so that each column,
each row, and each of the nine 3×3 sub-grids that compose the grid
contains all of the digits from 1 to 9. The puzzle setter provides a
partially completed grid, which typically has a unique solution. One
such solution is given below. Write a program to check whether the
solution is correct or not.*/


# include <stdio.h>

int main(){
    int arr[ ][ 9 ] = {

        5, 3, 4, 6, 7, 8, 9, 1, 2,
        6, 7, 2, 1, 9, 5, 3, 4, 8,
        1, 9, 8, 3, 4, 2, 5, 6, 7,
        8, 5, 9, 7, 6, 1, 4, 2, 3,
        4, 2, 6, 8, 5, 3, 7, 9, 1,
        7, 1, 3, 9, 2, 4, 8, 5, 6,
        9, 6, 1, 5, 3, 7, 2, 8, 4,
        2, 8, 7, 4, 1, 9, 6, 3, 5,
        3, 4, 5, 2, 8, 6, 1, 7, 9

    };

    int sum;

    for(int i=0; i<9; i++)
    {   
        sum = 0;
        for(int j=0; j<9; j++)
        {
            sum = sum + arr[i][j];
        }

        if(sum != 45)
        {
            printf("Problem in row = %d\n", i);
            return 1;
        }
    }

    printf("All rows are correct\n");

    for(int j=0; j<9; j++)
    {   
        sum = 0;
        for(int i=0; i<9; i++)
        {
            sum = sum + arr[i][j];
        }

        if(sum != 45)
        {
            printf("Problem in columns = %d\n", j);
            return 2;
        }
    }

    printf("All columns are correct\n");

    return 0;
}

