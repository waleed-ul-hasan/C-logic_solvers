#include <stdio.h>

int main() {
    float balance = 1000.0; // Initial balance
    int choice;
    float amount;

    printf("--- Welcome to the Simple C ATM ---\n");

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Current Balance: $%.2f\n", balance);
        } 
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%s", &amount); 
            balance = balance + amount;
            printf("$%.2f deposited successfully.\n", amount);
        } 
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            
            if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance = balance - amount;
                printf("$%.2f withdrawn successfully.\n", amount);
            }
        } 
        else if (choice == 4) {
            printf("Thank you for using the ATM. Goodbye!\n");
            break; // Breaks the loop and ends the program
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
