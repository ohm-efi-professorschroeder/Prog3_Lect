#include <filmcamera.h>

#include <iostream>

FilmCamera::FilmCamera(int year, std::string make, std::string model, std::string film)
: Camera(year, make, model)
{
    film_ = film;
}

void FilmCamera::takePhoto()
{
    std::cout << "Film camera '" << model_ << "' takes a photo." << std::endl;
}