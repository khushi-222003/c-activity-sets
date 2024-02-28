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
    if (n <= 1)
        return n;
    for(int i=0;i<n;i++){
        int a=0;
        int b=1;
        int fibo;
        fibo=a+b;
        a=b;
        b=fibo;
    }
    void output(int n, int fibo){
    printf("The in %d number fibonacci series is %d\n", n ,fibo);
    }
}
int main(){
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;

}