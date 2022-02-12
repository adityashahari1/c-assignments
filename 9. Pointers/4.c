/*Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.*/

# include <stdio.h>

void func(int*, int*, int*);

int main(){
    int x = 5, y = 8, z = 10;

    printf("x = %d, y = %d, z = %d\n",x,y,z);

    func(&x,&y,&z);

    printf("x = %d, y = %d, z = %d\n",x,y,z);

    return 0;
}

void func(int* x, int* y, int* z){

    int temp;
    temp =*z;
    *z = *y; 
    *y = *x;
    *x = temp;
    
}