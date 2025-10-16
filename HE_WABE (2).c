#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;   
    float amount;
    int running = 1;         

    do {
        printf("\n=====================================\n");
        printf("     ● WELCOME TO PALDO BANK ATM ●     \n");
        printf("=====================================\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("=====================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("=====================================\n");

        switch (choice) {
            case 1:
                printf("\nYour Current Balance: ₱%.2f\n", balance);
                printf("-------------------------------------\n");
                break;

            case 2:
                printf("\nEnter Amount to Deposit: ₱");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("₱%.2f Deposited Successfully!\n", amount);
                    printf("New Balance: ₱%.2f\n", balance);
                } else {
                    printf("Invalid Deposit Amount!\n");
                }
                printf("-------------------------------------\n");
                break;

            case 3:
                printf("\nEnter Amount to Withdraw: ₱");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid Withdrawal Amount!\n");
                } else if (balance - amount < 100) {
                    printf("Withdrawal Denied!\n");
                    printf("You must maintain at least ₱100.00 in your account.\n");
                } else {
                    balance -= amount;
                    printf("₱%.2f Withdrawn Successfully!\n", amount);
                    printf("Remaining Balance: ₱%.2f\n", balance);
                }
                printf("-------------------------------------\n");
                break;

            case 4:
                printf("\n=====================================\n");
                printf("°_°Thank You for Using PALDO BANK ATM!\n");
                printf("Have a great day! ^,^\n");
                printf("=====================================\n");
                running = 0; 
                break;

            default:
                printf("\nInvalid Choice! Please select a valid option.\n");
                printf("-------------------------------------\n");
        }

    } while (running == 1);

    return 0;
}
    