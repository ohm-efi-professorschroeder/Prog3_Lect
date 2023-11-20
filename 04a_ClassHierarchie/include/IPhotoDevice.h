#pragma once

class IPhotoDevice
{
public:
    virtual void takePhoto() = 0;
    virtual ~IPhotoDevice() {};
};
