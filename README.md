# Potential-Well-Heating-Simulation
A classical simulation to detail the heating of an anti-hydrogen atom in a potential well driven by a potential, in one dimension.

Utilises symplectic leapfrog algorithm for energy conserving numerical integration of equations of motion;

$$a_i(x_i) = A(x_i) = \frac{F(x_i)}{m} = \frac{1}{m}\bigg(-\frac{dU(x_i)}{dx} \bigg).$$
$$v_{i+1/2} = v_{i-1/2} + a_i\Delta t,$$
$$x_{i+1} = x_i + v_{i+1/2}\Delta t.$$

where $x,v,a$ are the position, velocity and acceleration of the particle in one dimension, $U$ is the potential the particle is under and $\Delta t$ is the time step of the simulation.

Simulation done in C++ with results plotted in Python (No technical reason just good for practicing both)

---

### Spring Potential (Static) Test:

$$F = -kx, \hspace{1cm}\phi = \frac{1}{2}kx^2.$$

Resulting kinetic energy graph and $\Delta t = 0.0001\text{s}$ and $T = 1\text{s}$, for a particle with no initial velocity at $x_i = -0.25\text{m}$.
![[F=-kx.png]]
![image|576](https://github.com/ECD-git/Potential-Heating-Simulation/blob/main/Figures%2011%3A3%3A26/F%3D-kx.png)
Shows energy conservation, oscillating back and forth over a potential proportional to $x^2$.

---

### Constant potential, switched on and off at a constant rate

Analogous to a top hat function of potential, KE increases exponentially over time:
![[PeriodicTopHat.png]]
![image|576](https://github.com/ECD-git/Potential-Heating-Simulation/blob/main/Figures%2011%3A3%3A26/PeriodicTopHat.png)

---

### Harmonic Oscillator, Total Energy after N oscillations for different time step

Using the same spring potential above, running for about 1000 oscillations for many different time steps, and getting the total energy (kinetic plus potential) at the last time step in each case. A test of how time step effects the accuracy of the Symplectic leapfrog algorithm. Unfortunately the harmonic oscillator potential is too simple for this test and provided no difference in total energy over 6 orders of magnitude on time step for 1000 oscillations.

![image|576](https://github.com/ECD-git/Potential-Heating-Simulation/blob/main/Figures%2016%3A3%3A26/HarmOscDeltEtot.png)