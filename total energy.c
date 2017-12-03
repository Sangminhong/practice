#include <stdio.h>

int main (void) {
double mass = 1;
double velocity = 2;
double ke = 0.5*mass*velocity*velocity;
#define PE 500;
double total_energy = ke + PE;
printf("Total Energy = %f", total_energy);
return 0;
}
