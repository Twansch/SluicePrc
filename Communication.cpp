#include <stdio.h>
#include <string.h>     // for strlen()
#include <stdlib.h>     // for exit()
#include <sys/socket.h> // for send() and recv()
#include <unistd.h>     // for sleep(), close()
#include <memory.h>     // for memset()
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */

#define RCVBUFSIZE 32   /* Size of receive buffer */

    int         sock;                   /* Socket descriptor */

    char        echoBuffer[RCVBUFSIZE]; /* Buffer for received string */
    int         echoStringLen;          /* Length of string to echo */
    int         bytesRcvd;              /* Bytes read in single recv() */

int CreateTCPClientSocket (const char * servIP, unsigned short port)
{
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
    echoServAddr.sin_addr.s_addr = inet_addr(servIP);   /* Server IP address */
    echoServAddr.sin_port        = htons(port);         /* Server port */

    /* Establish the connection to the echo server */
    if (connect(sock, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr)) < 0)
    {
        printf("connect() failed");
        //DieWithError("connect() failed");
    }
    
    return (sock);
}

void SendAndReceive(char * echoString)
{

        echoStringLen = strlen (echoString);          /* Determine input length */
        
        // TODO: add code to send this string to the server; use send()
        send(sock, echoString, echoStringLen, 0);
        
        
        // TODO: add code to receive & display the converted string from the server
        //       use recv() & printf()
        bytesRcvd = recv(sock, echoBuffer, RCVBUFSIZE-1, 0);
        if(bytesRcvd < 0)
        {
			printf("Received is unsuccesfull TCPEchoCLient.c \n");
		}
		
		echoBuffer[bytesRcvd] = '\0';
        printf("Message from server: %s", echoBuffer);
        
        printf("\n");
}

int main ()
{
	char messageString[] = "GetDoorLeft;";//"SetDoorLeft:open;"; //Don't forget to end with a semicolon!
    char *passingString = messageString;             /* String to send to echo server */
	printf("Communication started \n");
	fflush(stdout);
    sock = CreateTCPClientSocket("127.0.0.1", 5555/*const char * servIP, unsigned short port*/);
        printf("Socket created and connected \n");
        fflush(stdout);
    
    SendAndReceive(passingString);
	printf("Closing the show \n");
	fflush(stdout);
    
    close (sock);
    return 0;
}
