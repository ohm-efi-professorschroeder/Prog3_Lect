#include <photographer.h>

#include <iostream>

Photographer::Photographer(std::string name)
{
    name_ = name;
}

void Photographer::addCamera(Camera* camera)
{
    kameras_.push_back(camera);
}

void Photographer::takePhotos()
{
    std::cout << name_ << " takes photos: " << std::endl;
    for(Camera* kamera : kameras_)
    {
        kamera->takePhoto();
    }
}