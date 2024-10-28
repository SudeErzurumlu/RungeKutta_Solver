// RungeKuttaSolver.h
// Header file for the RungeKuttaSolver class

#ifndef RUNGE_KUTTA_SOLVER_H
#define RUNGE_KUTTA_SOLVER_H

#include <vector>
#include <functional>

class RungeKuttaSolver {
public:
    using Func = std::function<double(double, double)>;

    // Constructor
    RungeKuttaSolver(Func f, double initialY);

    // Method to solve the differential equation using the 4th order Runge-Kutta method
    std::vector<double> solve(const std::vector<double>& t);

private:
    Func f;           // Function representing the ODE dy/dt = f(t, y)
    double initialY;  // Initial condition
};

#endif // RUNGE_KUTTA_SOLVER_H
