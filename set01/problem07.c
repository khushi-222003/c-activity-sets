/*Write a C program to find sum of all natural numbers until _n_

***Function Declarations***

```c
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);*/

#include<stdio.h>
int input_n(){
    int n;
    printf("Enter the natural numbers\n");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    return sum;
}
void output(int n, int sum){

    printf("The sum of all natural numbers %d is %d", n,sum);
}
int main(){
    int n , sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;

}