#include <stdio.h>
int main() {
    int parking_status; // 1 for Legal, 0 for Illegal
    float fine_amount = 2000.0; // Standard Fine in PKR
    int student_minutes_lost;

    printf("--- Gujranwala Road Management System ---\n");
    printf("Is the vehicle parked in a No-Parking Zone? (1 for Yes, 0 for No): ");
    scanf("%d", &parking_status);

    if (parking_status == 1) {
        printf("\nVIOLATION DETECTED!\n");
        printf("Issuing Fine: %.2f PKR\n", fine_amount);
        
        printf("Enter minutes lost by the second-shift student: ");
        scanf("%d", &student_minutes_lost);
        
        if (student_minutes_lost > 30) {
            printf("Impact: Critical. Student missed the majority of the lecture.\n");
        } else {
            printf("Impact: Moderate. Student arrived late to the lecture.\n");
        }
    } else {
        printf("\nNo violation. Road is clear for student buses.\n");
    }

    return 0;
}
