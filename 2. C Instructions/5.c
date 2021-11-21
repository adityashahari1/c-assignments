/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:*/

# include <stdio.h>
# include <math.h>

int main (){
    float l1, l2, g1, g2;
    const float PI = 3.143;
    printf("Enter the value of latitude l1:");
    scanf("%f",&l1);

    printf("Enter the value of latitude l2:");
    scanf("%f",&l2);

    printf("Enter the value of longitude g1:");
    scanf("%f",&g1);

    printf("Enter the value of longitude g1:");
    scanf("%f",&g2);

    l1 = l1 * ( PI/180.0);
    l2 = l2 * ( PI/180.0);    
    g1 = g1 * ( PI/180.0);
    g2 = g2 * ( PI/180.0);


    float d = 0;
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));

    printf("Distance in Nautical Miles:%f",d);
    return 0;
}
