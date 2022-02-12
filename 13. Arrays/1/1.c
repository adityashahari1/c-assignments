/*Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the
user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times
it appears in the array.*/

# include <stdio.h>

int main(){
    int arr[15];

    printf("Enter 15 elements\n");

    for(int i = 0;i<=14; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter a number to be searched\n");
    scanf("%d", &num);

    int count = 0;

    for(int i = 0;i<=14; i++)
    {
        if(num==arr[i])
        {
            count++;
        }
    }
    
    if(count == 0)
    {
        printf("Element is not present\n");
    }

    printf("%d is preset %d times", num, count);

    return 0;
}