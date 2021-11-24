/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.*/

# include <stdio.h>

int main(){
    int r, s, a;
    printf("Enter the age of Ram:\n");
    scanf("%d",&r);

    printf("Enter the age of Shyam:\n");
    scanf("%d",&s);

    printf("Enter the age of Ajay:\n");
    scanf("%d",&a);

    if(r<s)
    {
        if(r<a){
            printf("Ram is the youngest.");
        }
        else
            printf("Ajay is the youngest.");
    }

    if(s<r)
    {
        if(s<a){
            printf("Shyam is the youngest.");
        }
        else
            printf("Ajay is the youngest.");
    }

    return 0;
}
