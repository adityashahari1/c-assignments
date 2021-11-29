/*Write a program that receives month and date of birth as input and
prints the corresponding Zodiac sign based on the following table:

Sun Sign    From - To

Capricorn   December 22 - January 19
Aquarius    January 20 - February 17
Pisces      September 23 - October 22
Aries       March 20 - April 19
Taurus      April 20 - May 20
Gemini      May 21 - June 20
Cancer      June 21 - July 22
Leo         July 23 - August 22
Virgo       August 23 - September 22
August      23 - September 22
Libra       September 23 - October 22
Scorpio     October 23 - November 21
Sagittarius November 22 - December 21
*/

# include<stdio.h>

int main(){
    int month, birth;
    printf("Enter birthday and month(1-12):\n");
    scanf("%d%d",&birth, &month);

    if((month==12 && birth>=22) || (month==1 && birth<=19))
        printf("Capricorn\n");

    else if((month==1 && birth>=20) || (month==2 && birth<=17))    
        printf("Aquarius\n");

    else if((month==2 && birth>=18) || (month==3 && birth<=19))    
        printf("Pisces\n");

    else if((month==3 && birth>=20) || (month==4 && birth<=19))    
        printf("Aries\n");

    else if((month==4 && birth>=20) || (month==5 && birth<=20))    
        printf("Taurus\n");

    else if((month==5 && birth>=21) || (month==6 && birth<=20))    
        printf("Gemini\n");

    else if((month==6 && birth>=21) || (month==7 && birth<=22))    
        printf("Cancer\n");

    else if((month==7 && birth>=23) || (month==8 && birth<=22))    
        printf("Leo\n");

    else if((month==8 && birth>=23) || (month==9 && birth<=22))    
        printf("Virgo\n");

    else if((month==9 && birth>=23) || (month==10 && birth<=22))    
        printf("Libra\n");
    
    else if((month==10 && birth>=23) || (month==11 && birth<=21))    
        printf("Scorpio\n");

    else if((month==11 && birth>=22) || (month==12 && birth<=21))    
        printf("Sagittarius\n");

    else
        printf("Invalid date.\n");
    return 0;
}
