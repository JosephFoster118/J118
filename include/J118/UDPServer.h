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
#include "J118/IPServer.h"


namespace J118
{


class UDPServer : public IPServer
{
private:

public:
    UDPServer(uint16_t port, std::string ip_ = "localhost");
    virtual void run();

    //Actions
    virtual void sendPacket(Packet* packet);
};


}
