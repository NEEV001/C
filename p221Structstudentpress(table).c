#include <stdio.h>
struct student {
    int srno;
    char sname[50];
    int engmark;
    int hindimark;
    char gender;
    int fees;
};

int main() {
    struct student s[15] = {
        {101, "Amit",    85, 78, 'M', 12000},
        {102, "Bhavna",  92, 88, 'F', 15000},
        {103, "Chirag",  10, 20, 'M', 10500},
        {104, "Divya",   69, 74, 'F', 13000},
        {105, "Ekta",    15, 5, 'F', 14500},
        {106, "Farhan",  70, 68, 'M', 11000},
        {107, "Gauri",   90, 85, 'F', 16000},
        {108, "Harsh",   65, 60, 'M', 10000},
        {109, "Isha",    15, 2, 'F', 17000},
        {110, "Jay",     80, 79, 'M', 12500},
        {111, "Kiran",   95, 89, 'F', 18000},
        {112, "Lata",    87, 90, 'F', 23000},
        {113, "Manish",  73, 76, 'M', 14000},
        {114, "Nikita",  66, 70, 'F', 11500},
        {115, "Omkar",   89, 84, 'M', 25000}
    };

    int i, option, min, max, pos = 0, m;
    char gender;

    do {
        printf("\npress 1 for all records");
        printf("\npress 2 for male ");
        printf("\npress 3 for ask gender");
        printf("\npress 4 for highest fees");
        printf("\npress 5 for lowest fees");
        printf("\npress 6 for student within rno range");
        printf("\npress 7 for total pass/fail");
        printf("\npress 8 for pass student");
        printf("\npress 9 for fail student");
        printf("\npress 10 for exit");
        printf("\nEnter option => ");
        scanf("%d", &option);

        printf("\nstudentrno\tstudentname\tstudenthindimark\tstudentengmark\tstudentgender\tstudentfee\n");
        printf("=====================================================================================\n");

        switch(option) {

            case 1:
                for(i = 0; i < 15; i++){
				
                    printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                        s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);}
                break;

            case 2:
				
                for(i = 0; i < 15; i++){
				
                    if(s[i].gender == 'M' || s[i].gender == 'm')
                        printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                            s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);}
                break;

            case 3:
                printf("Enter gender to search (M/F): ");
                scanf(" %c", &gender);
                for(i = 0; i < 15; i++){
				
                    if(s[i].gender == gender || s[i].gender == gender + 32 || s[i].gender == gender - 32){
					
                        printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                            s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);
                        }
                  }
                break;

            case 4:
                m = s[0].fees;
                pos = 0;
                for(i = 1; i < 15; i++) {
                    if(m < s[i].fees) {
                        m = s[i].fees;
                        pos = i;
                    }
                }
                printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                       s[pos].srno, s[pos].sname, s[pos].hindimark, s[pos].engmark, s[pos].gender, s[pos].fees);
                break;

            case 5:
                m = s[0].fees;
                pos = 0;
                for(i = 1; i < 15; i++) {
                    if(m > s[i].fees) {
                        m = s[i].fees;
                        pos = i;
                    }
                }
                printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                       s[pos].srno, s[pos].sname, s[pos].hindimark, s[pos].engmark, s[pos].gender, s[pos].fees);
                break;

            case 6:
                printf("Enter min roll number: ");
                scanf("%d", &min);
                printf("Enter max roll number: ");
                scanf("%d", &max);
                for(i = 0; i < 15; i++){
				
                    if(s[i].srno >= min && s[i].srno <= max){
					
                        printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                            s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);
                        }
                   }
                break;

            case 7: {
                int pass = 0, fail = 0;
                for(i = 0; i < 15; i++) {
                    if(s[i].engmark >= 35 && s[i].hindimark >= 35)
                        pass++;
                    else
                        fail++;
                }
                printf("\nTotal Pass = %d", pass);
                printf("\nTotal Fail = %d", fail);
                break;
            }

            case 8:
                for(i = 0; i < 15; i++){
				
                    if(s[i].engmark >= 35 && s[i].hindimark >= 35){
					
                        printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                            s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);
                        }
                  }
                break;

            case 9:
                for(i = 0; i < 15; i++){
				
                    if(s[i].engmark < 35 || s[i].hindimark < 35){
                        printf("%d\t\t%s\t\t%d\t\t\t%d\t\t%c\t\t%d\n",
                            s[i].srno, s[i].sname, s[i].hindimark, s[i].engmark, s[i].gender, s[i].fees);
                        }
              }
                break;

            case 10:
                printf("\nBye\n");
                break;

            default:
                printf("\nWrong option");
        }

        printf("=====================================================================================\n");

    } while(option != 10);    
}

