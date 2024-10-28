#pragma once

// TODO Beginn
#include <string>

class Camera{
protected:
    std::string make;
    std::string model;
    int year;

public:
    // Konstruktor
    Camera(std::string make, std::string model, int year);

    // Konstruktor
    Camera();

    // Kopierkonstruktor
    Camera(const Camera& other);

    // Destruktor
    ~Camera();

    void takePhoto();

};

// TODO Ende