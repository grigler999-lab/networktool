#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int validate_ip(char ip[]) {
    int dots = 0;
    int num = 0;
    int digits = 0;
    

    if (ip == NULL || ip[0] == '\0') {
        return 0;
    }

    for (int i = 0; ip[i] != '\0'; i++) {
        char c = ip[i];

        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
            digits++;

            if (num > 255) {
                return 0;
            }
        }
        else if (c == '.') {
            if (digits == 0) {
                return 0;   
            }

            dots++;
            if (dots > 3) {
                return 0;
            }

            num = 0;
            digits = 0;
        }
        else {
            return 0;      
        }
    }

    if (dots != 3 || digits == 0) {
        return 0;           
    }

    return 1;
}


int validate_port(char port[]) {
    int i = 0;

    if (port == NULL || port[0] == '\0') {
        return 0;
    }

    while (port[i] != '\0') {
        if (port[i] < '0' || port[i] > '9') {
            return 0;
        }
        i++;
    }

    int num = atoi(port);

    if (num < 1 || num > 65535) {
        return 0;
    }

    return 1;
}

int main() {
    int choice;
    int running = 1;
    char ip[50];
    char port[20];
    char log[100][100];
    int log_count = 0;
    
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
            scanf("%49s", ip);

            if (validate_ip(ip)) {
                printf("IP %s - giltig\n", ip);
                snprintf(log[log_count], 100, "IP %s - giltig", ip);
            } else {
                printf("IP %s - ogiltig\n", ip);
                snprintf(log[log_count], 100, "IP %s - ogiltig", ip);
            }
            
                log_count++;
                
            }       
        else if (choice == 2) {
            printf("Ange en port: ");
            scanf("%19s", port);
        
        if (validate_port(port)) {
            printf("Porten är giltig.\n");
            snprintf(log[log_count], 100, "Port %s - giltig", port);
        } else {
            printf("Porten är ogiltig.\n");
            snprintf(log[log_count], 100, "Port %s - ogiltig", port);
        }
        log_count++; 
        
        }
        else if (choice == 3) {
            printf("= LOGG =\n");
            for (int i = 0; i < log_count; i++) {
                printf("%d. %s\n", i + 1, log[i]);
            }
        } 
        else if (choice == 4) {
            printf("Totalt antal valideringar: %d\n", log_count);
            printf("Avslutar programmet\n");
            running = 0;
        } 
        else {
            printf("Ogiltigt val\n");
            
        }
    }
    return 0;
}