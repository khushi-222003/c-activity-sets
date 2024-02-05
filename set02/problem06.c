/*Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);*/

#include<stdio.h>
#include<string.h>
void input_string(char *str ){
    printf("Enetr the string\n");
    scanf("%s",str);
}
int str_reverse(char *str, char *rev_str){
    int length=strlen(str);
    for(int i=0;i<length/2; i++){
        char ch=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=ch;
    }
}
void output(char *str){
    printf("The reverse of sstring id %s\n", str);
}
int main(){
    char str[100];
    char rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str);
    return 0;
}