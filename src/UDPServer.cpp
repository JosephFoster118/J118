#include "J118/UDPServer.h"



namespace J118
{

	UDPServer::UDPServer(uint16_t port, uint32_t buffer_s) : Thread("UPD Server")
	{
		buffer_size = buffer_s;
		buffer = new char[buffer_size];
		port_number = port;
		socket_running = false;
		socket_data_lock = new std::mutex();
#if defined(__MINGW32__) || defined(_WIN32)
		//Initialise winsock
		printf("\nInitialising Winsock...");
		if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
		{
			printf("Failed. Error Code : %d",WSAGetLastError());
			exit(EXIT_FAILURE);
		}
		printf("Initialised.\n");
		 
		//Create a socket
		sock = socket(AF_INET , SOCK_DGRAM , 0 );
		if(sock == INVALID_SOCKET)
		{
			printf("Could not create socket : %d" , WSAGetLastError());
		}
		printf("Socket created.\n");
		 
		//Prepare the sockaddr_in structure
		server.sin_family = AF_INET;
		server.sin_addr.s_addr = INADDR_ANY;
		server.sin_port = htons(port_number);
		 
		//Bind
		if( bind(sock ,(struct sockaddr *)&server , sizeof(server)) == SOCKET_ERROR)
		{
			printf("Bind failed with error code : %d" , WSAGetLastError());
			exit(EXIT_FAILURE);
		}
		puts("Bind done");
#endif
		
	}
	
	
	void UDPServer::run()
	{
		socket_data_lock->lock();
		socket_running = true;
		while(socket_running)
		{
			socket_data_lock->unlock();
#if defined(__MINGW32__) || defined(_WIN32)
			
		fd_set fds ;
		int n ;
		struct timeval tv ;

		// Set up the file descriptor set.
		FD_ZERO(&fds);
		FD_SET(sock, &fds) ;

		// Set up the struct timeval for the timeout.
		tv.tv_sec = 1 ;
		tv.tv_usec = 0 ;
		n = select ( sock, &fds, NULL, NULL, &tv ) ;
		if ( n == 0)
		{ 
		}
		else if( n == -1 )
		{ 
		}
		else
		{
			int length = sizeof(server);
			socket_data_lock->lock();
			recvfrom(sock, buffer, buffer_size, 0, (SOCKADDR*)&server, &length);
			socket_data_lock->unlock();
			//printf("IP %s\n",inet_ntoa(server.sin_addr));
			onRecieve(buffer,inet_ntoa(server.sin_addr), ntohs(server.sin_port));
			
		}

		 
#endif			
			socket_data_lock->lock();
		}
		socket_data_lock->unlock();
	}
	
	void UDPServer::transfer(char* buff, uint32_t length, const char* send_ip, uint16_t send_port)
	{
#if defined(__MINGW32__) || defined(_WIN32)
		server.sin_port = htons(send_port);
		server.sin_addr.s_addr = inet_addr(send_ip);
		sendto(sock, buff, length, 0, (SOCKADDR*) & server, sizeof(server));

#endif
	}
	
	void UDPServer::closeSocket()
	{
		socket_data_lock->lock();
		socket_running = false;
		socket_data_lock->unlock();
		join();
	}
	
	UDPServer::~UDPServer()
	{
		closeSocket();
		printf("Socket Closed\n");
		SAFE_DELETE_ARRAY(buffer);
		SAFE_DELETE(socket_data_lock);
	}

}


