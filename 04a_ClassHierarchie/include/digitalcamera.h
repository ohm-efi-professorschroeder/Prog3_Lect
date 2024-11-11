#pragma once

// TODO Beginn
#include "camera.h"

class DigitalCamera : public Camera
{
private:
    unsigned int megapixel;

public:
    DigitalCamera(); // default Constructor
    DigitalCamera(unsigned int year, std::string make, std::string model, unsigned int megapixel);

    void takePhoto() override;
};

// TODO Ende