#pragma once

#include <camera.h>

class FilmCamera : public Camera
{
public:
    FilmCamera(int year, std::string make, std::string model, std::string film);
    virtual ~FilmCamera(){};
    void takePhoto() override;
private:
    std::string film_;
};