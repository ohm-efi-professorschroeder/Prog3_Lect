#include <digitalcamera.h>

#include <iostream>

DigitalCamera::DigitalCamera(int year, std::string make, std::string model, int megapixel)
: Camera(year, make, model)
{
    megapixel_ = megapixel;
}

void DigitalCamera::takePhoto()
{
    std::cout << "Digital camera '" << model_ << "' takes photo." << std::endl;
}