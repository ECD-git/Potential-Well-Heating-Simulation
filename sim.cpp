#include<iostream>

int main()
{
    // Define our constants
    float = wellLength 0.1 //[m]
    float = wellDepth = 0.5 // [kelvin]

    float bumpAmp = 0.01 // [kelvin]
    float bumpLength = 0.01 //[m]
    float bumpPos = (wellLength/2) - (bumpLength/2) //[m] //places bump in middle
    // this will need to be varied
    float bumpOmega = 2*pi // [rad/s] //driving frequency of potential 'bump'

    float v_0 = 0.02 //[m/s] //a few cm a second seems about right
    float M = 1.00784*1.66*10**(-27) //[kg] //using atomic mass of H
    float KE_0 = 0.5*M*v_0**2 //[J] //using classical KE
    float x_0 = 0 //[m] //particle starts at far left side 

    float timeStep = 0.001 //[s]
    float simTime = 10 //[s] //Overall Length of sim

    return 0;
}