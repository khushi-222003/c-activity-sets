/*Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
*/
#include<stdio.h>
int input(int *a, int *b, int *c) {
    printf("Enter the number a:");
    scanf("%d",a);
    printf("Enter the number b:");
    scanf("%d",b);
    printf("Enter the number c:");
    scanf("%d",c);
}

void compare(int a, int b, int c, int *largest) {
    *largest =  a;
    if (b > *largest) {
        *largest = b;
    }
     if (c > *largest) {
        *largest = c;
    }
    return largest;
}
void output(int a, int b, int c, int largest) {
    printf("The largest number among %d, %d, %d is %d",a,b,c,largest);
}
int main() {
    int a,b,c,largest;
    input(&a, &b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}