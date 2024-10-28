# runge_kutta.py
# This module contains the Runge-Kutta numerical methods for solving differential equations.

import numpy as np

def runge_kutta_4th_order(f, y0, t):
    """
    Applies the 4th order Runge-Kutta method to solve a first-order ODE.
    
    Parameters:
    f  : callable
        Function representing the ODE, i.e., dy/dt = f(t, y)
    y0 : float
        Initial condition
    t  : numpy.ndarray
        Array of time points where the solution is computed

    Returns:
    numpy.ndarray
        Approximate solution for each time point in `t`
    """
    n = len(t)
    y = np.zeros(n)
    y[0] = y0
    for i in range(1, n):
        h = t[i] - t[i - 1]
        k1 = h * f(t[i - 1], y[i - 1])
        k2 = h * f(t[i - 1] + h / 2, y[i - 1] + k1 / 2)
        k3 = h * f(t[i - 1] + h / 2, y[i - 1] + k2 / 2)
        k4 = h * f(t[i - 1] + h, y[i - 1] + k3)
        y[i] = y[i - 1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6
    return y
