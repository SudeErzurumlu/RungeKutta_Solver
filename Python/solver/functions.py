# functions.py
# Contains sample differential equations for testing the Runge-Kutta solver.

def dydt(t, y):
    """
    Sample differential equation: dy/dt = y - t^2 + 1
    
    Parameters:
    t : float
        Independent variable (often represents time)
    y : float
        Dependent variable

    Returns:
    float
        Derivative at point (t, y)
    """
    return y - t**2 + 1
