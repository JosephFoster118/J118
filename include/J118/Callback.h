#pragma once

//A simple callback class
namespace J118
{
class Callback
{
public:
    virtual void* callback(void* arg = nullptr) = 0;
};

}



