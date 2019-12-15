#include "J118/IPServer.h"

namespace J118
{
    IPServer::IPServer(uint16_t port, std::string ip_) : Thread("UDPServer")
    {
        port_number = port;
        ip = ip_;
        callback = nullptr;
    }

    void IPServer::setCallback(IPCallback* cb)
    {
        callback = cb;
    }

}




