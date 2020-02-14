#pragma once
#include <string>

namespace J118
{
namespace Device
{

typedef std::string DeviceName;

class Device
{
public:
    Device(DeviceName name);
protected:
    DeviceName device_name;
};

}//namespace Device
}// namespace J118


