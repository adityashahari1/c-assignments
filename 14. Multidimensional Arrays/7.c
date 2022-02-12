/*Given an array p[ 5 ], write a function to shift it circularly left by two
positions. Thus, if p[ 0 ] = 15, p[ 1 ]= 30, p[ 2 ] = 28, p[ 3 ]= 19 and p[
4 ] = 61 then after the shift p[ 0 ] = 28, p[ 1 ] = 19, p[ 2 ] = 61, p[ 3 ] =
15 and p[ 4 ] = 30. Call this function for a (4 x 5 ) matrix and get its
rows left shifted.*/

# include <stdio.h>

void moveLeft2(int *p);

int main(){ 
    
    int p[4][5] = {
        {15,30,28,19,61},
        {1,2,3,4,5},
        {6,7,8,9,20},
        {11,12,13,14,15}};

    moveLeft2(*p);

    for(int i =0; i<4; i++)
    {
        for(int j =0; j<5; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0; 
}

void moveLeft2(int *p){
    int tt, t, j;
    for(int k =0; k<=3; k++)
    {
        for(int i =0; i<=2; i++)
        {
            t = *(p + k * 5 + 0);
            for(j =0; j<=3; j++)
            {
                tt =  *(p + k * 5 + j);
                *(p + k * 5 + j) = *(p + k * 5 + j + 1);
                *(p + k * 5 + j + 1) = tt;
            }
            *(p + k * 5 + j) = t;
        }
    }
}