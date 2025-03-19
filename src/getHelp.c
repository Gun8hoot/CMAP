#include "../lib/getHelp.h"
#include <stdio.h>

int getHelp() {
    printf("CMAP PORT SCANNER : cmap -p {port} -i {ip}\n -i = Specify an host to scan\n -p = Scan a specific port (the default option scan every port to 1 to 25565)");
    return 0;
}