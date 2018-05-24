#pragma once


#if defined(__MINGW32__) || defined(_WIN32)
#include<winsock2.h>
#pragma comment(lib,"ws2_32.lib") //Winsock Library

#elif __linux
#include <sys/socket.h>
#endif

#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include "J118/UtilityMacros.h"
#include "J118/Thread.h"


namespace J118
{

class UDPServer : public Thread
{
private:

	bool socket_running;
	std::mutex* socket_data_lock;
	uint32_t buffer_size;
#if defined(__MINGW32__) || defined(_WIN32)
	SOCKET sock;
	struct sockaddr_in server, si_other;
    int slen , recv_len;
    
    WSADATA wsa;
#endif

	char *buffer;
	uint16_t port_number;

protected:
	void run();
public:

	virtual void onRecieve(char* message, const char* recv_ip, uint16_t recv_port) = 0;
	UDPServer(uint16_t port, uint32_t buffer_s = 512);
	void transfer(char* buff, uint32_t length, const char* send_ip, uint16_t send_port);
	void closeSocket();
	~UDPServer();

};

	
}