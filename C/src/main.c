// main.c
// Example usage of the Runge-Kutta solver

#include <stdio.h>
#include <stdlib.h>
#include "runge_kutta.h"

// Sample differential equation: dy/dt = y - t^2 + 1
double dydt(double t, double y) {
    return y - t * t + 1;
}

int main() {
    int n = 10;
    double t[] = {0.0, 0.25, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0};
    double y0 = 0.5;
    double y[n];

    runge_kutta_4th_order(dydt, y0, t, n, y);

    printf("Runge-Kutta 4th Order Solution:\n");
    for (int i = 0; i < n; i++) {
        printf("t = %.2f, y = %.4f\n", t[i], y[i]);
    }

    return 0;
}
