#include <stdio.h>
#include <stdlib.h>    
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/errno.h>
#include <netdb.h>
#include <string.h>

/*
-The goal is to be able ask another server to send some files over to our server to read-
    REQUIRMENTS
        -Client
                CreateSocket->Connect()->Send()->Recieve()
        -Server
            Process Flow
                CreateSocket->Connect()->Bind()->Listen()->Accept()->Recv->Send
                I want an open socket that is waiting for a connection. Acccepts connection processes the connection

*/
#define PORT "3572" // Port users will be connecting to.
#define Backlog 2 //How many connections are allowed.

int main(){
    // Our server endpoint code
//Socket struct
    struct addrinfo hints, *servinfo, *res;
    int SockFD;

    memset(&hints, 0, sizeof(hints));

    // LocalHost to be the IP
    hints.ai_family = PF_INET; // Version 4
    hints.ai_socktype = SOCK_STREAM; // Data type

    getaddrinfo(NULL, PORT, &hints, &res);

    //Creating Socket with the information that the getaddrinfo provided
    SockFD = socket(res->ai_family, res->ai_socktype, res->ai_protocol); // Output: 3
    //Binding Socket to IP and PORT
    if(bind(SockFD, res->ai_addr, res->ai_addrlen)!=0){ // Should Return 0 else -1
        perror("Binding: Line 43"); 
        exit(1);
    }
    //Listen on PORT for any oncoming request
    if(listen(SockFD, Backlog)!=0){
        perror("Listening: Line 45"); // Should return 0 if everything went right
        exit(1);
    }
    // Accepting User that messages the address and port after finishing Three-Way-Handshake
    if(accept(SockFD, res->ai_addr, res->ai_addrlen) == -1){ // The success return value is a Non-Negative int
        perror("Accecpt: Line 56");
        exit(1);
    }    

    while(SockFD > 0){
        printf("Listening for request");
    }





    

    return 0;
}