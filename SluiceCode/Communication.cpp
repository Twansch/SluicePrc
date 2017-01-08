#include "Communication.h"

#define RCVBUFSIZE 32   /* Size of receive buffer */
    
    
    Communication::Communication(unsigned short port)
    {
		Communication::Port = port;
		
	}

void Communication::CreateTCPClientSocket () //THIS FUNCTION AND THE CONSTRUCTOR BELONG TO THE 
												//INITIALIZATION OF SLUICEWATCH IF THIS FAILS IT HAS TO START OVER
{
    int                 sock;         /* Socket descriptor */
    struct sockaddr_in  echoServAddr; /* Echo server address */

    /* Create a reliable, stream socket using TCP */
    if ((sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
    {
        printf("Socket creation failed");
    }


    /* Construct the server address structure */
    memset(&echoServAddr, 0, sizeof(echoServAddr));     /* Zero out structure */
    echoServAddr.sin_family      = AF_INET;             /* Internet address family */
    echoServAddr.sin_addr.s_addr = inet_addr("127.0.0.1");   /* Server IP address */
    echoServAddr.sin_port        = htons(this->Port);         /* Server port */

    /* Establish the connection to the echo server */
    if (connect(sock, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr)) < 0)
    {
        printf("connect() failed");
    }
    
    this->Sock = sock;
}

void Communication::SendAndReceive(char * echoString)
{
        int echoStringLen = strlen (echoString);          /* Determine input length */
        
        // TODO: add code to send this string to the server; use send()
        send(this->Sock, echoString, echoStringLen, 0);
        
        int bytesRcvd;              /* Bytes read in single recv() */
        char echoBuffer[RCVBUFSIZE]; /* Buffer for received string */
        // TODO: add code to receive & display the converted string from the server
        //       use recv() & printf()
        bytesRcvd = recv(Communication::Sock, echoBuffer, RCVBUFSIZE-1, 0);
        if(bytesRcvd < 0)
        {
			printf("Received is unsuccesfull TCPEchoCLient.c \n");
		}
		
		echoBuffer[bytesRcvd] = '\0';
        printf("Message from server: %s", echoBuffer);
        
        printf("\n");
        
        //return echoBuffer //To Check if ack is received or getter is received
}
