/* Write a program to find the index of a substring of a string

***Function Declarations***
```c
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
```*/

#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char string[100], substring[100];
    int index;

    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);

    return 0;
}

void input_string(char* a, char* b) {
    printf("Enter a string: ");
    gets(a);

    printf("Enter a substring: ");
    gets(b);
}

int sub_str_index(char* string, char* substring) {
    int M = strlen(string);
    int N = strlen(substring);

    for (int i = 0; i <= M-N; i++) {
        int j;
        for (j = 0; j < N; j++) {
            if (string[i + j] != sgubstring[j]) {
                break;
            }
        }
        if (j == N) {
            return i;
        }
    }

    return -1;
}

void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("'%s' is found in '%s' at index %d\n", substring, string, index);
    } else {
        printf("'%s' is not found in '%s'\n", substring, string);
    }
}
