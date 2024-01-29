/*. Write a C program to add two numbers using **pass by reference**

***Function Declarations***

```c
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);*/

#include<stdio.h>
void input(int *a, int *b){
    printf("enter the value of a\n");
    scanf("%d", a);
    printf("Enter the value of b\n");
    scanf("%d", b);
}
void add(int a ,int b, int *sum){
    *sum=a+b;

}
void output(int a, int b, int sum){
    printf("The sum of two numbers %d,%d is %d",a,b,sum);
}
int main(){
    int x,y,result=0;
    input(&x,&y);
    add(x,y,&result);
    output(x,y,result);
    return 0;
}