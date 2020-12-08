#include <stdio.h>
#include <math.h>
#include <conio.h>

//
// Created by Александр on 07.12.2020.
//

typedef struct scan scan;

double classWork(double, double, double);
double homeWork(double a, double b);

int main() {
    /*
    // classWork
    double x, y, z;
    printf("Please, enter X, Y and Z\n");

    scanf("%d%d%d", &x,&y,&z);
    printf("%d", classWork(x,y,z));
     */

    //homeWork
    double a,b;
    printf("Please, enter A, B: ");
    scanf("%d%d", &a,&b);
    printf("Result = %d", homeWork(a,b));

    return 0;
}

/*
 * (x^2 - 0.1z + sqrt(2.5*y^2))/(3.7x^2 + (cos(y))^2)
 */
double classWork(double x, double y, double z) {
    double res = (pow(x, 2) - (0.1 * z) + sqrt(2.5 * y * y)) / (3.7 * x * x + (pow(cos(y), 2)));
    return res;
}

/*
 №1-19. Для заданних а,в обчислити:
 (a+b)*sin(a) + (a-b)*cos(b) + (a-b)/sqrt(sin(a)+cos(b))
 */
double homeWork(double a, double b) {
    double res = ((a + b) * sin(a) + (a - b) * cos(b) + (a - b)) / (sqrt(sin(a) + cos(b)));
    return res;
}