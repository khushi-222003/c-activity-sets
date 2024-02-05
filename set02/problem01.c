/* Write a program to find the area of a triangle.

***Function Declarations***
```c
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);*/

#include<stdio.h>
#include<math.h>
void input(float *base, float *height){
    printf("Enter the base of the triangle:\n");
    scanf("%f", base);
    printf("Enter the height of triangle:\n");
    scanf("%f", height);
}
void find_area(float base, float height, float *area){
    *area=base*height*0.5;
}
void output(float base, float height, float area){
    printf("The area of triangle is %f", area);
}
int main(){
    float base, height ,result;
    input(&base,&height);
    find_area(base,height,&result);
    output(base, height, result);
    return 0;
}