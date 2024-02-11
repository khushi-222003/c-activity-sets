
#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n]){
    printf("Enter the array\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
int is_composite_number(int n){
    for(int i=2; i <=n/2 ; i++){
        if(n%i==0){
            return 1;
        }
    
            return -1;
        
    }


}
int sum_composite_number(int n , int a[n]){
    int sum=0;
    for(int i=0; i<n; i++){
        if(is_composite_number(a[i])){
            sum+=a[i];
        }
    }

    return sum;

}

void output(int sum){
    printf("sum of composite number is %d",sum);
}
int main(){
    int  n, sum;
    int a[n];
    n=input_array_size();
    input_array(n,a);
    is_composite_number(n);
    sum=sum_composite_number(n,a);
    output(sum);
    return 0;


}