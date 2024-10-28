# main.py
# Entry point to test the Runge-Kutta 4th order solver.

import numpy as np
from solver.runge_kutta import runge_kutta_4th_order
from solver.functions import dydt
from solver.utils import print_solution

# Define time points and initial condition
t = np.linspace(0, 2, 10)
y0 = 0.5

# Solve the differential equation
y = runge_kutta_4th_order(dydt, y0, t)

# Display the solution
print_solution(t, y)
