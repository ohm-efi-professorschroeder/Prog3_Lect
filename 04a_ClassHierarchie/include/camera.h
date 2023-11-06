#pragma once

#include <string>

class Camera
{
public:
    Camera(int year, std::string make, std::string model);
    virtual void takePhoto();

protected:
    int baujahr_;
    std::string hersteller_;
    std::string modell_;
};