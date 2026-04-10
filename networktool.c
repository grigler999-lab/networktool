#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int running = 1;
    char ip[50];
    
    while (running) {
        printf("= NÄTVERKSVERKTYG =\n");
        printf("1. Validera IP-adress\n");
        printf("2. Validera port\n");
        printf("3. Visa logg\n");
        printf("4. Avsluta\n");

        printf("Välj ett alternativ: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Ogiltigt val. Ange ett nummer.\n");
            while (getchar() != '\n');
            continue;
        }
        if (choice == 1) {
            printf("Ange en IP-adress: ");
            scanf("%s", ip);
            printf("Du skrev: %s\n", ip);
        } 
        else if (choice == 2) {
            printf("Valde port-validering\n");
        } 
        else if (choice == 3) {
            printf("Visar logg\n");
        } 
        else if (choice == 4) {
            printf("Avslutar programmet\n");
            running = 0;
        } 
        else {
            printf("Ogiltigt val\n");
            
        }
    }
    return 0;
}