#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 100
#define GRAVITATIONAL_CONSTANT 6.67430e-11
#define JOULE_TO_EV 6.242e+18 // Conversion factor 

// Structure //

struct Atom {
    double rx, ry, rz;
    double vx, vy, vz;
    double mass;
};

double calculateDistance(struct Atom a, struct Atom b) {
    return sqrt(pow(a.rx - b.rx, 2) + pow(a.ry - b.ry, 2) + pow(a.rz - b.rz, 2));
}

double calculateKineticEnergy(struct Atom a) {
    double v = sqrt(pow(a.vx, 2) + pow(a.vy, 2) + pow(a.vz, 2));
    return 0.5 * a.mass * pow(v, 2) * JOULE_TO_EV; // Convert to eV 
}

double calculatePotentialEnergy(struct Atom a, struct Atom b) {
    double r = calculateDistance(a, b);
    return -GRAVITATIONAL_CONSTANT * a.mass * b.mass / r * JOULE_TO_EV; // Convert to eV
}


// Main //

int main() {
    srand(time(NULL));

    struct Atom atomistic[N];
    double totalKineticEnergy = 0;
    double totalPotentialEnergy = 0;
    
    // Define ranges for atomic properties
    double minMass = 1.67e-27; // Hydrogen atom mass in kg
    double maxMass = 3.35e-25; // Uranium atom mass in kg
    double maxVelocity = 1000; // Maximum velocity in m/s

    // Initialize atoms with random positions, velocities, and masses
    for (int i = 0; i < N; i++) {
        atomistic[i].rx = ((double)rand() / RAND_MAX) * 1e-10; // Random position in meters (order of angstroms)
        atomistic[i].ry = ((double)rand() / RAND_MAX) * 1e-10; // Random position in meters (order of angstroms)
        atomistic[i].rz = ((double)rand() / RAND_MAX) * 1e-10; // Random position in meters (order of angstroms)
        atomistic[i].vx = ((double)rand() / RAND_MAX) * maxVelocity; // Random velocity in m/s
        atomistic[i].vy = ((double)rand() / RAND_MAX) * maxVelocity; // Random velocity in m/s
        atomistic[i].vz = ((double)rand() / RAND_MAX) * maxVelocity; // Random velocity in m/s
        atomistic[i].mass = minMass + ((double)rand() / RAND_MAX) * (maxMass - minMass); // Random mass in kg
    }

    // Calculate total kinetic and potential energy in eV
    for (int i = 0; i < N; i++) {
        totalKineticEnergy += calculateKineticEnergy(atomistic[i]);
        for (int j = i + 1; j < N; j++) {
            totalPotentialEnergy += calculatePotentialEnergy(atomistic[i], atomistic[j]);
        }
    }

    double totalEnergyEV = totalKineticEnergy + totalPotentialEnergy;

    printf("Total Kinetic Energy: %f eV\n", totalKineticEnergy);
    printf("Total Dynamic Energy: %f eV\n", totalPotentialEnergy);
    printf("Total Energy: %f eV\n", totalEnergyEV);

    return 0;
}
