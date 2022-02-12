// Insertion sort

# include <stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 Elements:\n");
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =1; i<5; i++)
    {   
        int value = arr[i];
        int key = i;
        while(key>0 && arr[i-1] > value)
        {
            arr[key] = arr[key-1];
            key --;
        }

        arr[key] = value;
    }

    for(int i = 0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}