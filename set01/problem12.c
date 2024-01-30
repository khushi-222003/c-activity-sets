/* Write a C program to find the sum of _n_ complex numbers

***Function Declarations***
```c
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
```
*/
#include<stdio.h>
struct _complex{
    float real, imaginary;
};
typedef struct _complex Complex;
int get_n(){
    int n;
    printf("Enter the size of complex");
    scanf("%f",&n);
    return n;
}
Complex n_input_complex(int n, Complex c[n]){
    printf("enter %d values for arrays:\n");
    for(int i=0; i<n; i++){
        scanf("%f %f",&c[i].real, &c[i].imaginary);

    }

}
Complex add(Complex a, Complex b){
Complex sum;
sum.real=a.real+b.real;
sum.imaginary=a.imaginary+b.imaginary;
return sum;
}
Complex add_n_complex(int n, Complex c[n]){
    Complex sum;
    
    sum.real=0;
    sum.imaginary=0;
    for (int i=0; i<n ;i++){
        sum.real+=c[i].real;
        sum.imaginary+=c[i].imaginary;
    }
    return sum;
}
void output(int n, Complex c[n], Complex result){
    printf("The sum of %d of complex number is %f+ %fi\n",n,result.real, result.imaginary);
}
int main(){
    int n= get_n();
    Complex c[n],a,b;
    input_n_complex(n,c);
    add(a,b);
    Complex result=add_n_complex(n,c);
    output(n,c,result);
    return 0;

}

