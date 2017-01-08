#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <stdio.h>
#include <string.h>     // for strlen()
#include <stdlib.h>     // for exit()
#include <sys/socket.h> // for send() and recv()
#include <unistd.h>     // for sleep(), close()
#include <memory.h>     // for memset()
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */

class Communication
{
	public:
		Communication(unsigned short port);
		void CreateTCPClientSocket();
		void SendAndReceive(char * echoString);
	
	private:
		unsigned short Port;
		int Sock;

};

#endif
