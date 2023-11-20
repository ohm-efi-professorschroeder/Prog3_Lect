#include <camera.h>

#include <iostream>

Camera::Camera(int year, std::string make, std::string model)
{
    year_ = year;
    make_ = make;
    model_ = model;
}

void Camera::takePhoto()
{
    std::cout << "Camera takes photo" << std::endl;
}
