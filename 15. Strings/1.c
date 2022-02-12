/*Write a program that extracts part of the given string from the
specified position. For example, if the string is "Working with strings
is fun", then if from position 4, 4 characters are to be extracted
then the program should return string as "king". If the number of
characters to be extracted is 0 then the program should extract
entire string from the specified position.*/

# include <stdio.h>
# include <string.h>

int main(){
    char str[30] = {"Working with strings is fun"};
    char str1[30]; 
    char *st, *st1;
    int position, nos;

    printf("Enter position from: 1 - 25\n");
    scanf("%d", &position);
    printf("Enter number of characters: \n");
    scanf ("%d", &nos);

    st = str;
    st1 = str1;

    if(nos == 0)
    {
        nos = strlen(str);
    }

    st = st + position - 1;

    for(int i =0; i<nos; i++)
    {
        *st1 = *st;
        st++;
        st1++;
    }

    *st1 = '\0';
    
    printf("\nThe substring is: %s\n", str1);

    return 0; 
}

