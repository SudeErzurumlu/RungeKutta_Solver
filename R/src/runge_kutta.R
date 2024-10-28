# runge_kutta.R
# Implementation of the 4th order Runge-Kutta method for solving ODEs

runge_kutta_4th_order <- function(dydt, y0, t) {
  # Arguments:
  # dydt - function representing the differential equation dy/dt = f(t, y)
  # y0 - initial condition
  # t - vector of time points
  
  n <- length(t)
  y <- numeric(n)
  y[1] <- y0
  
  for (i in 2:n) {
    h <- t[i] - t[i - 1]
    k1 <- h * dydt(t[i - 1], y[i - 1])
    k2 <- h * dydt(t[i - 1] + h / 2, y[i - 1] + k1 / 2)
    k3 <- h * dydt(t[i - 1] + h / 2, y[i - 1] + k2 / 2)
    k4 <- h * dydt(t[i - 1] + h, y[i - 1] + k3)
    
    y[i] <- y[i - 1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6
  }
  
  return(y)
}
