#include <stdio.h>

int main() {
    float mass;
    int acceleration;
    float force;

    // College Style: One question, one answer
    printf("Enter mass of the object (in kg): ");
    scanf("%f", &mass);

    printf("Enter acceleration (in m/s^2): ");
    scanf("%d", &acceleration);

    // The Physics Formula: Force = mass * acceleration
    force = mass * acceleration;

    printf("\nThe Required Force is: %.2f Newtons\n", force);

    return 0;
}
