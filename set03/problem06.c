/* Write a program to find the index of a substring of a string

***Function Declarations***
```c
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);*/
#include<stdio.h>
void input_string(char *a, char *b){
    printf("Enter the string\n");
    scanf("%s", a);
    printf("Enter the substring part\n");
    scanf("%s", b);
}
int sub_str_index(char* string, char* substring){
    int k,j;
    int l=strlen("substring")
    for(int i=0; string[i]!=\0;i++){
        k=i;
        for(int j=0;j<=l-1;j++){
            if(string[k]!=substring[j]);
            break;
            k++
        }
        
    }
}