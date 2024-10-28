# functions.R
# Example differential equation function and other utility functions

# Sample differential equation: dy/dt = y - t^2 + 1
dydt <- function(t, y) {
  return(y - t^2 + 1)
}
