#include <stdio.h>
#include <conio.h>
int main()
{
    int epin,pin = 12345,choice;
    float balance = 10000.0;
    float amount;

    printf("** Welcome To ATM Simulator **");
    printf("Enter Your Pin :");
    scanf("%d",&epin);
    if (epin!=pin)
        printf("Invalid Pin / Enter Correct Pin :");
        return 0;
    
    do{
        printf("\n--- ATM Menu---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("\nEnter Your Choice (1-4):");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Your Current Balance: %f\n",balance);
                break;
            case 2:
                printf("\nEnter Amount to Deposit:");
                scanf("%f",amount);
                if (amount>0){
                    balance += amount;
                    printf("Successfully Deposited %f\n",amount);
                    printf("Update Balance : %f\n",balance);
                }
                else{
                    printf("Invalid Deposit Amount");
                }
                break;
            
            case 3:
                printf("\nEnter Amount to Withdraw:");
                scanf("%f",&amount);
                if (amount<=0){
                    printf("Invalid Withdraw Amount! Please Enter a Positive Value");
                }
                else if(amount > balance){
                    printf("Insufficient Balance / Your Current Balance :%f,balance");
                }
                else{
                    balance -=amount;
                    printf("Please Collect your cash:");
                    printf("Remaining Balance : %f\n",balance);
                }
                break ;
            case 4:
                printf("\nThank You For Using The ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid Choice !");

        }

    } while (choice != 4);
    getch();
    return 0;
}