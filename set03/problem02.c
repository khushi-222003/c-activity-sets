#include<stdio.h>
int input(){
    int a;
    printf("Enter the sides\n");
    scanf("%d",&a);
    return a;
    
}
 int check_scalene(int a,int b,int c){
if(a!=b&& a!=c && b!=c){
    printf("Its a scalene triangle\n");
    return 1;

}
else{
    printf("Its a not a scalene traingle\n");
}
return 0;
 }
 void output(int a, int b, int c, int isscalene){
    if(isscalene){
        printf("The triangle is scalene\n");
    }
    else{
        printf("The triangle is not scalene");
    }
 }
 int main(){
    int a,b,c;
    a = input();
    b = input();
    c = input();
    check_scalene(a,b,c);
    int isscalene;
    output(a,b,c,isscalene);
    return 0;
 }