/*Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.

ASCII Values                Characters
A – Z                       65 – 90
a – z                       97 – 122
0 – 9                       48 – 57
special symbols             0 - 47, 58 - 64, 91 - 96, 123 - 127*/
              
# include <stdio.h>

int main (){
    char x;
    printf("Enter a character:\n");
    scanf("%c",&x);

    if(x>=65 && x<=90)
        printf("Character entered %c is an Upper case letter.\n",x);

    else if(x>=97 && x<=122)
        printf("Character entered %c is  Small case letter.\n",x);

    else if(x>=48 && x<=57)
        printf("Character entered %c is a digit.\n",x);

    else if((x>=0 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127))        
        printf("Character entered %c is a special symbol.\n",x);

    else 
        printf("Invalid/. %c\n",x);
    return 0;
}


