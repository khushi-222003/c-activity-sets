/*8. Write a C program to find sum of _n_ different numbers entered by the user.

***Function Declarations***

```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
```*/

#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    for(int i=0; i<n; i++){
        scanf("%d",a[i]);
    }

}
int sum_n_array(int n, int a[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
void output(int n, int a[n],int sum)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d  ",a[i]);
        while(i<n-1)
        {
            printf("+");
            break;
        }
    }
    printf("is %d",sum);
}
int main(){
    int n, sum, a[100];
    n=input_array_size();
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;

}