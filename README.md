# Potential-Well-Heating-Simulation
A classical simulation to detail the heating of an anti-hydrogen atom in a potential well driven by a potential, in one dimension.

Utilises symplectic leapfrog algorithm for energy conserving numerical integration of equations of motion;
$$
a_i(x_i) = A(x_i) = \frac{F(x_i)}{m} = \frac{1}{m}\bigg(-\frac{dU(x_i)}{dx} \bigg).
$$
$$
v_{i+1/2} = v_{i-1/2} + a_i\Delta t,
$$
$$
x_{i+1} = x_i + v_{i+1/2}\Delta t.
$$
where $x,v,a$ are the position, velocity and acceleration of the particle in one dimension, $U$ is the potential the particle is under and $\Delta t$ is the time step of the simulation.

Simulation done in C++ with results plotted in Python (No technical reason just good for practicing both)
