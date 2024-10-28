// runge_kutta.c
// Implementation of the 4th order Runge-Kutta method

#include <stdio.h>
#include "runge_kutta.h"

void runge_kutta_4th_order(Func f, double y0, double t[], int n, double y[]) {
    y[0] = y0;

    for (int i = 1; i < n; i++) {
        double h = t[i] - t[i - 1];
        double k1 = h * f(t[i - 1], y[i - 1]);
        double k2 = h * f(t[i - 1] + h / 2, y[i - 1] + k1 / 2);
        double k3 = h * f(t[i - 1] + h / 2, y[i - 1] + k2 / 2);
        double k4 = h * f(t[i - 1] + h, y[i - 1] + k3);

        y[i] = y[i - 1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    }
}
