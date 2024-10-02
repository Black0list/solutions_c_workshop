#include <stdio.h>


typedef struct {
    float x;
    float y;
} Point;


int main(){


    Point pnt;

    pnt.x = 1.2;
    pnt.y = 3;

    Point *p = &pnt;

    p->x = 3.2;
    p->y = 10;

    printf("X = %.f\nY = %.f", p->x,p->y);


    

}