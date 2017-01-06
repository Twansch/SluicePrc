// Derived classes
//class Door: public CommunicationInterface {
#include <stdio.h>
#include <string.h>     // for strlen()
#include <stdlib.h>     // for exit()
#include <sys/socket.h> // for send() and recv()
#include <unistd.h>     // for sleep(), close()
#include <memory.h>     // for memset()
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */


class CommunicationInterface  {

public:
   // pure virtual function providing interface framework.
   virtual int sendAndReceiveMessage() = 0;
   
	
   void createSocketConnection(unsigned short port) {
	   
    int                 sock;         /* Socket descriptor */
	struct sockaddr_in  echoServAddr; /* Echo server address */

    /* Create a reliable, stream socket using TCP */
    if ((sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
    {
        printf("Socket creation failed");
        //DieWithError("socket() failed");
    }


    /* Construct the server address structure */
    memset(&echoServAddr, 0, sizeof(echoServAddr));     /* Zero out structure */
    echoServAddr.sin_family      = AF_INET;             /* Internet address family */
    echoServAddr.sin_addr.s_addr = inet_addr("127.0.0.1");   /* Server IP address */
    echoServAddr.sin_port        = htons(port);         /* Server port */

    /* Establish the connection to the echo server */
    if (connect(sock, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr)) < 0)
    {
        printf("connect() failed");
        //DieWithError("connect() failed");
    }
   }
	
   void closeSocketConnection() {
      close(sock);
   }
	
protected:
	int         sock;                   /* Socket descriptor */
	
private:
	//const char * servIP = "127.0.0.1";
};
