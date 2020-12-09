#include <stdio.h>
#include <math.h>
#include <conio.h>

//
// Created by Александр on 07.12.2020.
//

typedef struct scan scan;

double homeWork(double a, double b);

int main() {
    //homeWork
    float a,b;
    printf("Please, enter A, B: ");
    scanf("%f%f", &a,&b);
    printf("Result = %d", homeWork(a,b));

    return 0;
}

/*
 №1-19. Для заданних а,в обчислити:
 (a+b)*sin(a) + (a-b)*cos(b) + (a-b)/sqrt(sin(a)+cos(b))
 */
double homeWork(double a, double b) {
    double res = ((a + b) * sin(a) + (a - b) * cos(b) + (a - b)) / (sqrt(sin(a) + cos(b)));
    return res;
}