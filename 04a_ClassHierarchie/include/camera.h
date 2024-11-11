#pragma once

#include <string>

// TODO Beginn

class Camera
{
protected:
    std::string make;
    std::string model;
    unsigned int year;

public:
    Camera(); // default Constructor
    Camera(std::string make, std::string model, unsigned int year);

    // Interface
    //virtual void takePhoto() = 0;

    virtual void takePhoto();
};

// TODO Ende