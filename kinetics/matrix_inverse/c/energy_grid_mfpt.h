#ifndef ENERGY_GRID_MFPT_H
#define ENERGY_GRID_MFPT_H

double** convertEnergyGridToTransitionMatrix(double*, int, double (*)(double, double, int));
double computeMFPT(int*, int*, double**, int, int);
void inverse(double*, int);
double transitionRateFromProbabilities(double, double, int);
double transitionRateFromEnergies(double, double, int);

#endif