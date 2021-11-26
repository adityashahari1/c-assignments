/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/

# include <stdio.h>

int main (){
    int x1, x2, x3, y1, y2, y3, m, n;

    printf("Enter (x1 y1):\n");
    scanf("%d%d",&x1,&y1);

    printf("Enter (x2 y2):\n");
    scanf("%d%d",&x2,&y2);

    printf("Enter (x3 y3):\n");
    scanf("%d%d",&x3,&y3);

    m = (y2 - y1)/(x2 - x1);
    n = (y3 - y2)/(x3 - x2);

    if(m == n)
        printf("All three points fall on one straight line.\n");

    else
        printf("All three points do not fall on one straight line.\n");

    return 0;
}
