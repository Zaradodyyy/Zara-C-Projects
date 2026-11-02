#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
/*
-The goal is to be able ask another server to send some files over to our server to read-
    REQUIRMENTS
        -Client
                CreateSocket->Connect()->Send()->Recieve()
        -Server
            Process Flow
                CreateSocket->Connect()->Bind()->Listen()->Accept()->Recv->Send
    
    Functions Possibly needed
        RequestFunc(),
        ProcessDataFunc(),
        SendFunc(),
        RecoverFunc()


*/

//Stucts
// Host/Service Name Lookups
typedef struct addinfo{
    int AI_Flags; // AI_Passive, AI_Canonname
    int AI_Family; // AF_INET, AF_INET6, AF_UNSPEC
    int AI_Socktype; // SOCK_STREAM, SOCK_DGRAM
    int AI_Protocol; // use 0 for "any"
    size_t *pAI_sockaddr; // size of ai_addr in bytes
    char *pAI_canonnamep; //Full Canocial Name

     ADDRINFO *ai_next; //Linked_List, Next node

}ADDRINFO;

// Struct holds Socket information for many types of sockets
typedef struct sockaddr{
    unsigned short sa_family; // adress family AF_xxx v4 or v6
    char sa_data[14]; // 14 byte of protocol address 
} SA;


// s=socket in=internet sin=socketinternet
typedef struct sockadd_in{
    short int sin_family; // Address family
    unsigned short int sin_port; // Port Number
    struct in_addr sin_addr; // Internet address
    unsigned char sin_zero[8]; // Same size as struct sockaddr
}SAI;

// Internet address
typedef struct in_addr{
    unsigned long s_addr;
}IA;


int main(){
    SAI pt;
    SAI addy;

    //type of address and socket

    //Address and Port of server
    pt.sin_port = 8080;
    addy.sin_addr.s_addr = "127.0.0.1";



    

    return 0;
}