// main.cpp
// Example usage of the RungeKuttaSolver class

#include <iostream>
#include <vector>
#include "RungeKuttaSolver.h"

// Sample differential equation: dy/dt = y - t^2 + 1
double dydt(double t, double y) {
    return y - t * t + 1;
}

int main() {
    // Define time points and initial condition
    std::vector<double> t = {0.0, 0.25, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0};
    double initialY = 0.5;

    // Instantiate solver with the differential equation function and initial condition
    RungeKuttaSolver solver(dydt, initialY);

    // Solve the differential equation
    std::vector<double> y = solver.solve(t);

    // Output the solution
    std::cout << "Runge-Kutta 4th Order Solution:\n";
    for (size_t i = 0; i < t.size(); ++i) {
        std::cout << "t = " << t[i] << ", y = " << y[i] << "\n";
    }

    return 0;
}
