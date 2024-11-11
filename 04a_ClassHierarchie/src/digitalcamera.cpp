#include <digitalcamera.h>
#include <iostream>

// TODO Beginn
using namespace std;

DigitalCamera::DigitalCamera() : Camera()
{}

DigitalCamera::DigitalCamera(unsigned int year, string make, string model, unsigned int megapixel) : Camera(make, model, year), megapixel(megapixel)
{}

void DigitalCamera::takePhoto()
{
    cout << "Taking photo with " << megapixel << " megapixel digital camera " << make << " " << model << endl;
}

// TODO Ende