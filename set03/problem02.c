/*
2. Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);*/

#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the x-coordinate of triangle A\n:");
    scanf("%f",x1);
    printf("Enter the y-coordinate of triangle A\n:");
    scanf("%f",y1);
     printf("Enter the x-coordinate of triangle B\n:");
    scanf("%f",x2);
    printf("Enter the y-coordinate of triangle B\n:");
    scanf("%f",y2);
     printf("Enter the x-coordinate of triangle C\n:");
    scanf("%f",x3);
    printf("Enter the y-coordinate of triangle C\n:");
    scanf("%f",y3);


}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    float side1=sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));
    float side2=sqrt(pow(x3-x1, 2)+ pow(y3-y1, 2));
    float side3=sqrt(pow(x3-x2, 2)+ pow(y3-y2, 2));
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
        return 1;
    }
    else{
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    if(result==1){
        printf("The points A,B,C forms a triangle");


    }
    else if(result==0){
        printf("The points A,B,C do not forms a triangle")
    }
}
int main(){
    float x1, y1, x2, y2, x3, y3,result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    triangle=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}