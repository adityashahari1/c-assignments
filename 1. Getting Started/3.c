/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.*/

# include <stdio.h>

int main(){
	float fheit, centigrade;
	printf("Enter temperature in Fahrenheit degrees: \n");
	scanf ("%f", &fheit);

	centigrade =(fheit-32) * 5/9;
	printf("Temperature in Centigrade: %0.2f\n", centigrade);

	return 0; 
}
