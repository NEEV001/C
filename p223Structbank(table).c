#include <stdio.h>

struct bank {
    int acno;
    int balance;
    char name[100];
    int srno;
};

int main() {
    struct bank b[15] = {
        {245667, 12000, "Amit", 1},
        {245668, 9500, "Bhavna", 2},
        {245669, 10500, "Chirag", 3},
        {245123, 8500, "Divya", 4},
        {245124, 13000, "Ekta", 5},
        {245125, 9800, "Farhan", 6},
        {245126, 11500, "Gauri", 7},
        {256123, 8700, "Harsh", 8},
        {256323, 10200, "Isha", 9},
        {255123, 9400, "Jay", 10},
        {257123, 16000, "Kiran", 11},
        {211612, 30000, "Lata", 12},
        {111612, 14500, "Manish", 13},
        {987654, 8200, "Nikita", 14},
        {167238, 27000, "Omkar", 15}
    };

    int i, option;

    do {
        printf("\npress 1 for all record");
        printf("\npress 2 for highest bank balance");
        printf("\npress 3 for lowest bank balance");
        printf("\npress 4 for exit");
        printf("\npress 5 for search by account number");
        printf("\nEnter option => ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\nAll Records:\n");
                for(i = 0; i < 15; i++) {
                    printf("%d\t\t%s\t\t%d\t\t\t%d\n",
                           b[i].acno, b[i].name, b[i].srno, b[i].balance);
                }
                break;

            case 2: {
                int max = b[0].balance, index = 0;
                for(i = 1; i < 15; i++) {
                    if(b[i].balance > max) {
                        max = b[i].balance;
                        index = i;
                    }
                }
                printf("\nHighest Balance:\n");
                printf("%d\t\t%s\t\t%d\t\t\t%d\n",
                       b[index].acno, b[index].name, b[index].srno, b[index].balance);
                break;
            }

            case 3: {
                int min = b[0].balance, index = 0;
                for(i = 1; i < 15; i++) {
                    if(b[i].balance < min) {
                        min = b[i].balance;
                        index = i;
                    }
                }
                printf("\nLowest Balance:\n");
                printf("%d\t\t%s\t\t%d\t\t\t%d\n",
                       b[index].acno, b[index].name, b[index].srno, b[index].balance);
                break;
            }

            case 4:
                printf("Bye\n");
                break;

            case 5: {
                int acno, found = 0;
                printf("\nenter acno-> ");
                scanf("%d", &acno);
                for(i = 0; i < 15; i++) {
                    if(b[i].acno == acno) {
                        printf("\nAccount Found:\n");
                        printf("%d\t\t%s\t\t%d\t\t\t%d\n",
                               b[i].acno, b[i].name, b[i].srno, b[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Account not found.\n");
                }
                break;
            }

            default:
                printf("wrong opt\n");
        }

    } while(option != 4);

    return 0;
}

