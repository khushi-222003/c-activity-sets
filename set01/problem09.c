/*9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

***Function Declarations***
```c
float input();
float square_root(float n);
void output(float n, float sqrroot);*/

#include<stdio.h>
#include<math.h>
double input(){
double num;
printf("Enter the number\n");
scanf("%lf",&num);
return num;
}
 double mysqrt(double x){
    double y=x;
    double z=(y+(x/y))/2;
    while(fabs(y-z)>=0.000001){
        y=z;
        z=(y+(x/y))/2;
    }
    return z;
    
     }
     void output(double x, double root){
        printf("The square of %lf\n",root);

     }
     int main(){
        double num,x,root;
        num=input();
        double result=mysqrt(num);
        output(num,result);
        return 0;

     }