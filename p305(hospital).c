#include <stdio.h>

int main() {
    int patientAge,temperature,bloodPressure;
    
    printf("\nEnter the age => ");
    scanf("%d", &patientAge);

    printf("Enter the temperature => ");
    scanf("%d", &temperature);

    printf("Enter the blood pressure => ");
    scanf("%d", &bloodPressure);

    
    if (patientAge < 2 || patientAge > 80 || temperature > 104 || bloodPressure > 180) {
        printf("\nPatient is in CRITICAL condition.");
    }
    else if ((patientAge >= 2 && patientAge <= 10) &&
             (temperature >= 102 && temperature <= 104) &&
             (bloodPressure >= 160 && bloodPressure <= 180)) {
        printf("\nPatient is in HIGH condition.");
    }
    else if ((patientAge >= 11 && patientAge <= 69) &&
             (temperature >= 100 && temperature <= 102)) {
        printf("\nPatient is in MEDIUM condition.");
    }
    else {
        printf("\nPatient is in NORMAL condition.");
    }

    return 0;
}
