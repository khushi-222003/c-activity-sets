#include<stdio.h>
typedef struct _triangle {
    float base, altitude, area;
}Triangle;

Triangle input_triangle(){
    Triangle t;
printf("Enter the base:\n");
scanf("%f", &t.base);
printf("Enter the altitude:\n");
scanf("%f", &t.altitude);
return t;

}
void find_area(Triangle *t){
    float area;
    t->area=t->base*t->altitude*0.5;
}
void output(Triangle t){
    printf("The area of triangle if %f", t.area);

}
int main(){
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;


}