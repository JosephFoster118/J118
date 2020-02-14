#pragma once
#include <string>
#include <map>

namespace J118
{
namespace Device
{

typedef std::string DeviceName;
typedef std::map <std::string,std::string> DeviceStatus;


class Device
{
public:
    Device(DeviceName name);

    DeviceName getName();
    DeviceStatus getStatus();

    
protected:
    DeviceName device_name;
    DeviceStatus device_status;
};

}//namespace Device
}// namespace J118


