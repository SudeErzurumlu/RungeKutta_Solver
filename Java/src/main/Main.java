// Main.java
// Main class for running the Runge-Kutta solver

package main;

import solver.*;
import utils.SolutionPrinter;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Sample differential equation: dy/dt = y - t^2 + 1
        DifferentialEquation equation = new DifferentialEquation() {
            @Override
            public double evaluate(double t, double y) {
                return y - t * t + 1;
            }
        };

        // Define time points and initial condition
        List<Double> t = Arrays.asList(0.0, 0.25, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0);
        double initialY = 0.5;

        // Instantiate solver with the differential equation and initial condition
        RungeKuttaSolver solver = new RungeKuttaSolver(equation, initialY);

        // Solve the differential equation
        List<Double> y = solver.solve(t);

        // Output the solution
        SolutionPrinter.printSolution(t, y);
    }
}
