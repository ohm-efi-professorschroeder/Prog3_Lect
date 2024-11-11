#pragma once

// TODO Beginn
#include "camera.h"

class FilmCamera : public Camera
{
private:
    std::string film;

public:
    FilmCamera(); // default Constructor
    FilmCamera(unsigned int year, std::string make, std::string model, std::string film);

    void takePhoto() override;
};

// TODO Ende