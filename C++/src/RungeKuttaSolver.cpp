// RungeKuttaSolver.cpp
// Implementation of the RungeKuttaSolver class

#include "RungeKuttaSolver.h"

RungeKuttaSolver::RungeKuttaSolver(Func f, double initialY)
    : f(f), initialY(initialY) {}

std::vector<double> RungeKuttaSolver::solve(const std::vector<double>& t) {
    int n = t.size();
    std::vector<double> y(n);
    y[0] = initialY;

    for (int i = 1; i < n; ++i) {
        double h = t[i] - t[i - 1];
        double k1 = h * f(t[i - 1], y[i - 1]);
        double k2 = h * f(t[i - 1] + h / 2, y[i - 1] + k1 / 2);
        double k3 = h * f(t[i - 1] + h / 2, y[i - 1] + k2 / 2);
        double k4 = h * f(t[i - 1] + h, y[i - 1] + k3);

        y[i] = y[i - 1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    }

    return y;
}
