#include <stdio.h>
#include <strings.h>
#include "./lib/main.h"

char IPaddr[buffer] = {0};

int main(int argc, char *argv[]) {
    arguments(argc, argv, IPaddr);
    printf("%s\n", IPaddr);
    scanner(IPaddr);


}