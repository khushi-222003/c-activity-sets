/* Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another
*/
#include<stdio.h>
int input_side(){
    int a;
    printf("Enter the side:");
    scanf("%d", &a);
    return a;
}
 int check_scalene(int a, int b, int c){
    if (a!=b && b!=c && a!=c){
        return 1;
    }
    else{ 
        return -1; 
        }
 }
 void output( int a, int b, int c, int result){
    if(result>0){
        printf("This is not scalene triangle:");
    }
    else if (result<0){
        printf("This is not a scalene trinagle:");
    }
 }
 int main(){
    int a,b,c,result;
    a=input_side();
    b=input_side();
    c=input_side();
    result=check_scalene(a,b,c);
    output(a,b,c,result);
    return 0;
 }