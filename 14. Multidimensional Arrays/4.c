/*Write a program to find if a square matrix is symmetric.*/

# include <stdio.h>
 

int main(){
    int arr[3][3] = {  //take array as input if ans is always true
        {1, 4, 2},
        {4, 1, 3},
        {2, 3, 1}
    };

    int count =0;

    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            
            if(arr[i][j] == arr[j][i]);
            {
                count++;   
            }

        }
    }

    if(count == 9)
    {
        printf("The Matrix is symmetric\n");
    }
    else
    {
        printf("The Matrix is not symmetric\n");
    }

    return 0;
}

