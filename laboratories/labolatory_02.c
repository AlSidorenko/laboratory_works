#include <stdio.h>
#include <math.h>
#include <conio.h>

//
// Created by Александр on 08.12.2020.
//

/*
 * Варіан 2-19. Обчислити:
 * (x+y)/xy + x^3, x>0, y>0;
 * 3.14*y,         x=0;
 * x^2,            y=0;
 * 1 - в інших випадках.
 */

double homeWork(double x, double y);

int main() {

    double x, y;
    printf("Please, enter X, Y: ");
    scanf("%d%d", &x, &y);
    printf("Result = %d", homeWork(x, y));

    return 0;
}

double homeWork(double x, double y) {
    double res;
    if ((x > 0) & (y > 0)) {
        res = (x + y) / (x * y) + pow(x, 3);
    } else if (x == 0) {
        res = 3.14 * y;
    } else if (y == 0) {
        res = pow(x, 2);
    } else {
        res = 1;
    }
    return res;
}