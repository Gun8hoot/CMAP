#include "../lib/scanner.h"
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>



int scanner(char IP[]) {
    int sockfd;
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("Socket ERROR");
        exit(0);
    }
    struct sockaddr_in servAddr;
    servAddr.sin_family = AF_INET;
    servAddr.sin_port
        = htons(8080);
    servAddr.sin_addr.s_addr = *IP;
    int connectionStatus
        = connect(sockfd, (struct sockaddr*)&servAddr, sizeof(servAddr));
    if (connectionStatus == -1) {
        printf("Error ... \n");
        exit(0);
    }
    else {
        char strData[255];
        recv(sockfd, strData, sizeof(strData), 0);
        printf("OPEN \n");
    }
    return 0;
}