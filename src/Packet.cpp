#include "J118/Datagram.h"
namespace J118
{
Datagram::Datagram(std::string ip_, uint16_t port_number, void* data_, size_t size_)
{
    ip = ip_;
    port = port_number;
    data = new uint8_t[size];
    memcpy(data,data_,size_);
    size = size_;
}

Datagram::Datagram(const Datagram &src)
{
    ip = src.ip;
    port = src.port;
    data = new uint8_t[src.size];
    memcpy(data,src.data,src.size);
    size = src.size;
    
}

Datagram::~Datagram()
{
    if(data != nullptr)
    {
        delete [] data;
        data = nullptr;
    }
}


uint16_t Datagram::getPort()
{
    return port;
}


std::string Datagram::getIP()
{
    return ip;
}

uint8_t* Datagram::getData()
{
    return data;
}

void Datagram::getData(void* dst)
{
    memcpy(dst,data,size);
}

size_t Datagram::getSize()
{
    return size;
}




}