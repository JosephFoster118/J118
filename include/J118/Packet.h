#pragma once

#include <string>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

namespace J118
{

class Packet
{
private:
    uint16_t port;
    std::string ip;
    uint8_t* data;
    size_t size;
public:
    Packet(std::string ip_, uint16_t port_number, void* data_, size_t size_);
    Packet(const Packet &src);
    virtual ~Packet();

    //Getters
    uint16_t getPort();
    std::string getIP();
    uint8_t* getData();
    void getData(void* dst);
    size_t getSize();


};

}
