#include <stdio.h>

//Scholarship Academic Logic Helper

int main() {
    float marks, total = 0, average;
    int subjects, i;

    printf("--- Academic Performance & Scholarship Logic ---\n");
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for(i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    average = total / subjects;
    printf("\n--- Final Results ---\n");
    printf("Total Score: %.2f\n", total);
    printf("Average Percentage: %.2f%%\n", average);

    
    if(average >= 85) {
        printf("Status: Excellent! Strong prospect for international scholarships.\n");
    } else if(average >= 70) {
        printf("Status: Competitive candidate.\n");
    } else {
        printf("Status: Keep improving your C fundamentals!\n");
    }

    return 0;
}
