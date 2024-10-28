// SolutionPrinter.java
// Utility class for printing solution of the differential equation

package utils;

import java.util.List;

public class SolutionPrinter {
    public static void printSolution(List<Double> t, List<Double> y) {
        System.out.println("Runge-Kutta 4th Order Solution:");
        for (int i = 0; i < t.size(); i++) {
            System.out.printf("t = %.2f, y = %.4f%n", t.get(i), y.get(i));
        }
    }
}
