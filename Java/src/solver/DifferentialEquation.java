// DifferentialEquation.java
// Interface representing a differential equation dy/dt = f(t, y)

package solver;

public interface DifferentialEquation {
    // Evaluates the derivative function dy/dt at given values of t and y
    double evaluate(double t, double y);
}
