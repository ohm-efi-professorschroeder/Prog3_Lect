#include <filmcamera.h>

#include <iostream>

// TODO Beginn

using namespace std;

FilmCamera::FilmCamera() : Camera()
{}

FilmCamera::FilmCamera(unsigned int year, string make, string model, string film) : Camera(make, model, year), film(film)
{}

void FilmCamera::takePhoto()
{
    cout << "Taking photo with analogue camera " << make << " " << model << " with film " << film << endl;
}

// TODO Ende