#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>
#include <string.h>
#include "J118/Thread.h"
#include "J118/Packet.h"
#include "J118/IPCallback.h"

//OS Specific includes
#ifdef __linux__ 
    //linux code goes here
#elif _WIN32
#include <winsock2.h>
#else

#endif

namespace J118
{


class IPServer: public J118::Thread
{
private:
    uint16_t port_number;
    std::string ip;
    uint32_t buffer_size;
    IPCallback* callback;

#ifdef __linux__ 
    //linux code goes here
#elif _WIN32
    WSADATA wsa_data;
    SOCKET socket;
    SOCKADDR_IN receiver_address;
    SOCKADDR_IN sender_address;

#else

#endif


protected:

public:
    IPServer(uint16_t port, std::string ip_ = "localhost");
    virtual void run() = 0;
    
    //Actions
    virtual void sendPacket(Packet* packet) = 0;

    //setup
    void setCallback(IPCallback* cb);


};



}
