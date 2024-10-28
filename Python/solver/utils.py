# utils.py
# Utility functions for the Runge-Kutta solver.

def print_solution(t, y):
    """
    Prints the computed solution in a readable format.
    
    Parameters:
    t : numpy.ndarray
        Array of time points
    y : numpy.ndarray
        Computed solution at each time point
    """
    for i in range(len(t)):
        print(f"t = {t[i]:.2f}, y = {y[i]:.4f}")
