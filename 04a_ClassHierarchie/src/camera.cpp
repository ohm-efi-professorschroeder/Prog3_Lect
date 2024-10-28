#include <camera.h>

#include <iostream>

// TODO Beginn

// Konstruktor
Camera::Camera(std::string make, std::string model, int year)
    : make(make), model(model), year(year)
{
}

// Konstruktor
Camera::Camera()
: make(""), model(""), year(0)
{
}

// Kopierkonstruktor
Camera::Camera(const Camera& other)
{
    make = other.make;
    model = other.model;
    year = other.year;
}

// Destruktor
Camera::~Camera()
{
}

void Camera::takePhoto()
{
    std::cout << "Taking Photo with " << make << "." << std::endl;
}
// TODO Ende