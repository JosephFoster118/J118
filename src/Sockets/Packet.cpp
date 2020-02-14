#include "J118/Packet.h"
namespace J118
{
Packet::Packet(std::string ip_, uint16_t port_number, void* data_, size_t size_)
{
    ip = ip_;
    port = port_number;
    data = new uint8_t[size];
    memcpy(data,data_,size_);
    size = size_;
}

Packet::Packet(const Packet &src)
{
    ip = src.ip;
    port = src.port;
    data = new uint8_t[src.size];
    memcpy(data,src.data,src.size);
    size = src.size;
    
}

Packet::~Packet()
{
    if(data != nullptr)
    {
        delete [] data;
        data = nullptr;
    }
}


uint16_t Packet::getPort()
{
    return port;
}


std::string Packet::getIP()
{
    return ip;
}

uint8_t* Packet::getData()
{
    return data;
}

void Packet::getData(void* dst)
{
    memcpy(dst,data,size);
}

size_t Packet::getSize()
{
    return size;
}




}