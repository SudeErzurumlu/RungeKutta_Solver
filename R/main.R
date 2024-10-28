# main.R
# Main script for executing the Runge-Kutta solver

# Source necessary scripts
source("src/runge_kutta.R")
source("src/functions.R")

# Define time points and initial condition
t <- seq(0, 2, by = 0.25)  # Define time steps
initial_y <- 0.5           # Set initial condition

# Solve the differential equation using Runge-Kutta 4th Order method
solution <- runge_kutta_4th_order(dydt, initial_y, t)

# Print the solution
cat("Runge-Kutta 4th Order Solution:\n")
for (i in seq_along(t)) {
  cat(sprintf("t = %.2f, y = %.4f\n", t[i], solution[i]))
}
