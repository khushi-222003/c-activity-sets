/*Write a program to check if the given number is prime

***Function Declarations***
```c
int input_number();
int is_prime(int n);
void output(int n, int result);*/


#include<stdio.h>
int input_number(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    return num;
}
int is_prime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
        }
        else{
    
    return 1;
        }
}
}
void output(int n ,int result){
    if(result==1){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}
int main(){
    int num, result;
    num=input_number();
    result=is_prime(num);
    output(num,result);
    return 0;
}