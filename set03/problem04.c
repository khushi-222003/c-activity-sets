/*Write a program to find nth number in fibonacci sequence.

> Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

***Function Declarations***
```c
int input();
int find_fibo(int n);
void output(int n, int fibo);
```*/
#include<stdio.h>
int input(){
    int n,a,b,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n){
    
        int a=0;
        int b=1;
        int fibo;
    for(int i=2;i<n;i++){
        
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return fibo;
}

    void output(int n, int fibo){
    printf("The in %dth number fibonacci series is :%d\n", n ,fibo);
    }

int main(){
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;

}