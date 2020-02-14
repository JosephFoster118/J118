#include "J118/Device.h"


namespace J118
{
namespace Device
{
Device::Device(DeviceName name)
{
    device_name = name;
    device_status.insert(std::pair<std::string,std::string>("name",device_name));
}

DeviceName Device::getName()
{
    return device_name;
}

DeviceStatus Device::getStatus()
{
    return DeviceStatus();
}

}//namespace Device
}// namespace J118