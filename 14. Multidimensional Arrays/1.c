/*How will you initialize a three-dimensional array threed[ 3 ][ 2 ][ 3]?
How will you refer the first and last element in this array?*/

# include <stdio.h>

int main(){
    int threed[3][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
        },

        {
            {11, 22, 33},
            {44, 55, 66},
        },

        {
            {111, 222, 333},
            {444, 555, 666}
        }
    };

    printf("%d ", *(*(*(threed +0) +0) +0));
    printf("%d ", *(*(*(threed +2) +1) +2));
}