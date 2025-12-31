#include <stdio.h>

int main() {
    int choice;
    int n1, n2, ans;

    // College Style: Ask and Wait
    printf("Type 1 for Add or 2 for Sub: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    if (choice == 1) {
        ans = n1 + n2;
        printf("Result: %d\n", ans);
    } 
    else {
        ans = n1 - n2;
        printf("Result: %d\n", ans);
    }

    return 0;
}
