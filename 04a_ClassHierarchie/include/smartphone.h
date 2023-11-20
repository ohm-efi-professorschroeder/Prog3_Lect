#pragma once

#include <string>

#include "IPhotoDevice.h"

class Smartphone : public IPhotoDevice
{
public:
    Smartphone(std::string make, std::string model);
    virtual ~Smartphone(){};
    virtual void takePhoto();
private:
    std::string make_;
    std::string model_;
};