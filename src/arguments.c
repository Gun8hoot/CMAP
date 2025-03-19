#include "../lib/arguments.h"
#include <string.h>
#include <stdlib.h>


void arguments(int argc, char *argv[], char *IP) {
    for (int i = 0; i < argc; i++) {
        if (argc == 1 || argc == 2 || argc == 4) {
            IP = NULL;
            break;
        }
        else if (strcmp(argv[i], "-i") == 0) {
            strcpy(IP, argv[i+1]);
        }
    }

    if (IP == NULL) {
        printf("[!] PLZ SPECIFY AN IP ADDR\n");
        exit(1);
    }
    return;
}