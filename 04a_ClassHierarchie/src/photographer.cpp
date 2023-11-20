#include <photographer.h>

#include <iostream>

Photographer::Photographer(std::string name)
{
    name_ = name;
}

void Photographer::addCamera(IPhotoDevice* camera)
{
    cameras_.push_back(camera);
}

void Photographer::takePhotos()
{
    std::cout << name_ << " takes photos: " << std::endl;
    for(IPhotoDevice* kamera : cameras_)
    {
        kamera->takePhoto();
    }
}