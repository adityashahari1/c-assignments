// Bubble sort

# include <stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 Elements:\n");
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    int n = 5;
    int flag = 0;

    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n-i-1; j++)  // -i slight optimization
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag ++;
            }
        }

        if(flag == 0)   // this makes the best case as O(n)
        {
            break;
        }
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}