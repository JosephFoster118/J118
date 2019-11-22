#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>
#include <string.h>
#include "J118/Thread.h"

namespace J118
{


class IPServer: public J118::Thread
{
private:
    uint16_t port_number;
    std::string ip;
protected:

public:
    IPServer(uint16_t port, std::string ip_ = "localhost");
    virtual void run() = 0;
    

    //Events

};



}
