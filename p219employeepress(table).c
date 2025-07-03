#include <stdio.h>

struct employee {
    int eno;
    char ename[50];
    int esalary;
};

int main() {
    struct employee e[15] = {
        {101, "Amit", 12000},
        {102, "Bhavna", 9500},
        {103, "Chirag", 10500},
        {104, "Divya", 8500},
        {105, "Ekta", 13000},
        {106, "Farhan", 9800},
        {107, "Gauri", 11500},
        {108, "Harsh", 8700},
        {109, "Isha", 10200},
        {110, "Jay", 9400},
        {111, "Kiran", 16000},
        {112, "Lata", 30000},
        {113, "Manish", 14500},
        {114, "Nikita", 8200},
        {115, "Omkar", 27000}
    };

    int i, option, range,max,min, count = 0;

    do{
    printf("\npress 1 for all records");
    printf("\npress 2 for employees with good salary (>10000)");
    printf("\npress 3 for employees with bad salary (<=10000)");
    printf("\npress 4 for Count all records");
    printf("\npress 5 for Count good salary records");
    printf("\npress 6 for employees within salary range");
    printf("\nEnter option => ");
    scanf("%d",&option);

        if (option==6) {
            printf("Enter salary range:");
            scanf("%d", &range);
        }
        printf("\nEmployeeNo\tEmployeeName\tSalary\n");
        printf("============================================\n");

        switch(option) {
            case 1:
                for(i = 0; i < 15; i++)
                    printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 2:
                for(i = 0; i < 15; i++)
                    if(e[i].esalary > 10000)
                        printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 3:
                for(i = 0; i < 15; i++)
                    if(e[i].esalary <= 10000)
                        printf("%d\t\t%s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 4:
                printf("Total number of employees: %d\n", 15);
                break;

            case 5:
                for(i = 0; i < 15; i++)
                    if(e[i].esalary > 10000)
                        count++;
                printf("Number of employees with good salary: %d\n", count);
                break;

            case 6:
                printf("enter the min range");
                scanf("%d",min);
                printf("enter the max range");
                scanf("%d",max);
                for(i = 0; i < 15; i++)
                    if(e[i].esalary >= min && e[i].esalary<=max)
                        printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            default:
                printf("\nwrong opt");
        }
    }while(option!=7);
    printf("============================================\n");

    
}
