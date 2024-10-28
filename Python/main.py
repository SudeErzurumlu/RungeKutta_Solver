# main.py
# Entry point to test the Runge-Kutta 4th order solver.

from solver import runge_kutta_4th_order, dydt, print_solution

# Time points and initial condition
t = np.linspace(0, 2, 10)
y0 = 0.5

# Solving the ODE
y = runge_kutta_4th_order(dydt, y0, t)

# Display solution
print_solution(t, y)
