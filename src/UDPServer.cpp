#include "J118/UDPServer.h"



namespace J118
{
	UDPServer::UDPServer(uint16_t port, std::string ip_) : IPServer(port, ip_)
	{

	}

	void UDPServer::run()
	{
		printf("Starting Server...\n");
	}

	void UDPServer::sendPacket(Packet* packet)
	{

	}

}