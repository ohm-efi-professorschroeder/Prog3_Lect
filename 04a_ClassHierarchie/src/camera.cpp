#include <camera.h>

#include <iostream>

Camera::Camera(int year, std::string make, std::string model)
{
    baujahr_ = year;
    hersteller_ = make;
    modell_ = model;
}

void Camera::takePhoto()
{
    std::cout << "Camera takes photo" << std::endl;
}
