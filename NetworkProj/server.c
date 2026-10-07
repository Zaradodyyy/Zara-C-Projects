#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>

//Stucts
// Struct holds Socket information for many types of sockets
struct sockaddr{
    unsigned short sa_family; // adress family AF_xxx v4 or v6
    char sa_data[14]; // 14 byte of protocol address 
};


// s=socket in=internet sin=socketinternet
struct sockadd_in{
    short int sin_family; // Address family
    unsigned short int sin_port; // Port Number
    struct in_addr sin_addr; // Internet address
    unsigned char sin_zero[8]; // Same size as struct sockaddr
};

// Internet address
struct in_addr{
    unsigned long s_addr;
};


int main(){

    return 0;
}