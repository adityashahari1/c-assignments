/*Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements of
each row with the elements of the corresponding column.*/

# include <stdio.h>

int main(){
    int arr[4][4] = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int tarr[4][4];

    for(int i =0; i<4; i++)
    {
        for(int j =0; j<4; j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }

    printf("Transpose of a matrix: \n");
    for(int i =0; i<4; i++)
    {
        for(int j =0; j<4; j++)
        {
           printf("%d ", tarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}