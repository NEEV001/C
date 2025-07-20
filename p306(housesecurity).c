#include <stdio.h>
int main() {
    int hour, day;
    char motion, vacation;

    
    printf("\nEnter hour (0-23): ");
    scanf("%d", &hour);
    
    printf("\nEnter day of the week (1-7): ");
    scanf("%d", &day);

    
    printf("\nMotion detected (y/n): ");
    scanf(" %c", &motion);

    printf("\nVacation mode on (y/n): ");
    scanf(" %c", &vacation);


    if (motion == 'y') {
        if (vacation=='y'||hour>6|| hour>=23) {
            
            printf("\n RED ALERT! Unauthorized motion detected during off hours or vacation mode.\n");
        } else {
            
            printf("\n GREEN:Family is expected to be home");
        }
    } else {
        if (hour >= 11 && hour <23) {
            
            printf("\n BLUE: No motion detected. Everything is normal");
        } else {
            
            printf("\n YELLOW ALERT! Motion detected between 11 PM - 6 AM");
        }
    }

    return 0;
}
