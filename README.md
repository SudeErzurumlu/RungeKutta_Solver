
# Runge-Kutta Numerical Solver Library

Welcome to the **Runge-Kutta Numerical Solver Library** — a cross-language library for solving ordinary differential equations (ODEs) using the 4th-order Runge-Kutta method. This repository includes modular, well-documented implementations in **Python, C, C++, R, and Java**, making it an invaluable resource for developers, researchers, and students seeking reliable ODE solutions across different programming languages.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Directory Structure](#directory-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Languages](#supported-languages)
- [Examples](#examples)
- [License](#license)

---

## Overview

The 4th-order Runge-Kutta method is a widely-used numerical approach to solve ODEs in applied mathematics, engineering, and scientific computing. This project encapsulates the core algorithm in multiple languages, providing:
- Easy-to-follow implementations across languages
- Consistent functionality and modular design in each language
- Optimized code structure and documented mathematical explanations for ease of understanding

Whether you're simulating dynamic systems, modeling processes, or learning differential equations, this library offers robust tools for accurate solutions.

## Features

- **Multi-language Support**: C, C++, Python, R, and Java versions
- **Clear Directory Structure**: Well-organized code for ease of integration and testing
- **High Modularity**: Separated modules for core functionality, utilities, and example equations
- **Extensive Documentation**: Code is thoroughly commented for ease of understanding
- **Flexible and Scalable**: Easily extend the solver for more complex differential equations

## Directory Structure

Each language folder has a distinct structure designed to enhance modularity and clarity:

```plaintext
├── C/
│   ├── src/
│   │   ├── main.c
│   │   └── runge_kutta.c
│   └── include/
│       └── runge_kutta.h
├── C++/
│   ├── src/
│   │   ├── main.cpp
│   │   └── RungeKuttaSolver.cpp
│   └── include/
│       └── RungeKuttaSolver.h
├── Python/
│   ├── main.py
│   ├── src/
│   │   ├── runge_kutta.py
│   │   └── differential_equation.py
│   └── __init__.py
├── R/
│   ├── main.R
│   ├── src/
│   │   ├── runge_kutta.R
│   │   └── functions.R
├── Java/
│   ├── src/
│   │   ├── main/
│   │   │   └── Main.java
│   │   ├── solver/
│   │   │   ├── RungeKuttaSolver.java
│   │   │   └── DifferentialEquation.java
│   │   └── utils/
│       └── SolutionPrinter.java
└── README.md
```

## Installation

### Cloning the Repository
Clone this repository to access all language versions:
```bash
git clone https://github.com/yourusername/runge-kutta-solver.git
cd runge-kutta-solver
```

### Compiling and Running
For each language, follow the instructions below:

- **Python**: No compilation needed. Run directly with `python main.py`.
- **C**: Compile with `gcc src/main.c src/runge_kutta.c -o runge_kutta_solver`.
- **C++**: Compile with `g++ src/main.cpp src/RungeKuttaSolver.cpp -o runge_kutta_solver`.
- **Java**: Compile with `javac -d bin src/**/*.java` and run with `java -cp bin main.Main`.
- **R**: Run directly with `Rscript main.R`.

## Usage

Each language provides a similar interface:
1. Define the differential equation `dy/dt = f(t, y)`.
2. Set initial conditions.
3. Specify the time points for the solution.
4. Call the `Runge-Kutta` solver function to compute results.

**Python Example**:
```python
from src.runge_kutta import runge_kutta_4th_order
from src.differential_equation import dydt

t_values = [0, 0.25, 0.5, 0.75, 1.0]
initial_y = 0.5
solution = runge_kutta_4th_order(dydt, initial_y, t_values)
print(solution)
```

For detailed examples, refer to the respective `main` files in each language directory.

## Supported Languages

The library includes complete implementations in:
- **Python**: Accessible and ideal for quick prototyping.
- **C**: Efficient, low-level implementation for performance.
- **C++**: Object-oriented, optimized for complex applications.
- **R**: Tailored for statistical and mathematical applications.
- **Java**: Robust, versatile, and ideal for cross-platform solutions.

## Examples

Below are example ODEs you can solve using this library:
- Simple linear equation: `dy/dt = 2*y`
- Exponential growth model: `dy/dt = r*y`, with `r` as growth rate
- Newton’s cooling law: `dy/dt = -k*(y - T_env)`

Each `main` file provides a demonstration of the library's usage in solving one of these ODEs.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Contributions, suggestions, and feedback are highly welcome! Feel free to reach out or submit a pull request.
