/* Write a program to find the length of a line

***Function Declarations***
```c
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
```*/

#include<stdio.h>
#include<math.h>

typedef struct point{
    float x,y;
}Point;

typedef struct line{
    float p1,p2;
    float distance;
}Line;

Point input_point(){
    Point p;
    printf("Enter first coordinate\n ");
    scanf("%f",&p.x);
    printf("Enter the second coordinate\n ");
    scanf("%f",&p.y);
    return p;
}
Line input_line(){
    Line l;
    printf("Enter the x- coordinate for the first point of the line\n")
    scanf("%f",&l.p1.x);
    printf("Enter the y- coordinate for the first point of the line\n")
    scanf("%f",&l.p1.y);
    printf("Enter the x- coordinate for the first point of the line\n")
    scanf("%f",&l.p2.x);
    printf("Enter the y- coordinate for the first point of the line\n")
    scanf("%f",&l.p2.y);
    return 1;
    
}

void find_length(Line *l){
    l->distance=sqrt(pow(l->p2.x-l->p1.x, 2)+pow(l->p2.y-l->p1.y, 2));

}
void output(Line l){
    printf("The length of the line from (%.2f,%.2f) to(%.2f,%.2f) is %.2f\n", l.p1.x,l.p1.y,l.p2.x,l.p2.y,distance);

}
void main(){
    Line line=input_line();
    find_length(&line);
    output(line);
    return 0;
}
