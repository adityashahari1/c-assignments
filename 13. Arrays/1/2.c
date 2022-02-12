// Selection sort

# include <stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 Elements:\n");

    for (int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i =0; i<4; i++)
    {
        int iMin = i;

        for(int j =i+1; j<5; j++)
        {

            if(arr[iMin]>arr[j])
            {
                iMin = j;
            }

            int temp = arr[i];
            arr[i] = arr[iMin] ;
            arr[iMin] = temp;
        }
    }

    for(int i =0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
     

    return 0;
}