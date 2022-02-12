/*Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run.
Hint: Make use of an infinite while and a switch statement.*/

# include <stdio.h>

int main(){
    int x= 0,num;
    int count =1,flag = 0;

    while(x!=4)
    {
        printf("1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&x);
        
        switch(x)
        {
            case 1:
                printf("Enter an integer:\n");
                scanf("%d",&num);
                for(int i = 2;i<=num; i++)
                {
                    count = count * i;
                }
                printf("Factorial is:%d\n\n",count);
                break;

            case 2:    
                printf("Enter an integer:\n");
                scanf("%d",&num);
                for(int i =2; i<num; i++)
                {
                    if(num%i==0)
                    {
                        flag =1;
                        break;
                    }
                }
                if(num==1)
                {
                    printf("Neither prime nor composite.\n\n");
                }
                else
                {
                    if(flag==1)
                    {
                        printf("Not prime\n\n");
                    }
                    else
                        printf("Prime\n\n");
                }
                
                
                break;

            case 3:   
                printf("Enter an integer:\n");
                scanf("%d",&num);

                if((num%2)==0)
                    printf("Even number\n\n");
                else
                    printf("Odd number\n\n");
                break;

            case 4:
                printf("Exit\n");
                break;

                
        }

    }


    return 0;
}