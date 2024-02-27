/*Write a program to check if the given number is prime

***Function Declarations***
```c
int input_number();
int is_prime(int n);
void output(int n, int result);*/


#include<stdio.h>
int input_number(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
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
void output(int n, int result){
    if(result==1){
        printf("The numnber is a prime number\n");
    }
    else{
        printf("The number is not a prime number\n");
    }

}
int main(){
    int n,result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;
}