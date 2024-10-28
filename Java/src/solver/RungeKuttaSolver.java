// RungeKuttaSolver.java
// Class implementing the 4th order Runge-Kutta method for solving ODEs

package solver;

import java.util.List;
import java.util.ArrayList;

public class RungeKuttaSolver {
    private DifferentialEquation equation;
    private double initialY;

    // Constructor
    public RungeKuttaSolver(DifferentialEquation equation, double initialY) {
        this.equation = equation;
        this.initialY = initialY;
    }

    // Solves the differential equation for given time points
    public List<Double> solve(List<Double> t) {
        List<Double> y = new ArrayList<>();
        y.add(initialY);

        for (int i = 1; i < t.size(); i++) {
            double h = t.get(i) - t.get(i - 1);
            double yPrev = y.get(i - 1);
            double tPrev = t.get(i - 1);

            double k1 = h * equation.evaluate(tPrev, yPrev);
            double k2 = h * equation.evaluate(tPrev + h / 2, yPrev + k1 / 2);
            double k3 = h * equation.evaluate(tPrev + h / 2, yPrev + k2 / 2);
            double k4 = h * equation.evaluate(tPrev + h, yPrev + k3);

            double yNext = yPrev + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
            y.add(yNext);
        }

        return y;
    }
}
