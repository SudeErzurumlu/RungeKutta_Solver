// runge_kutta.h
// Header file for the 4th order Runge-Kutta method

#ifndef RUNGE_KUTTA_H
#define RUNGE_KUTTA_H

// Function pointer type for the differential equation function
typedef double (*Func)(double t, double y);

// Function prototype for the 4th order Runge-Kutta solver
void runge_kutta_4th_order(Func f, double y0, double t[], int n, double y[]);

#endif // RUNGE_KUTTA_H
