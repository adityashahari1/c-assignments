/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/

# include <stdio.h>

int main(){
    int basicSalary;
    printf("Enter your basic salary: \n");
    scanf("%d" ,&basicSalary);
    
    int dAllowance, hrAllowance;
    dAllowance = basicSalary* 0.4;
    hrAllowance = basicSalary * 0.2;

    int grossSalary = basicSalary + dAllowance + hrAllowance;

    printf("Gross Salary: %d\n",grossSalary);

}
