#include <photographer.h>

#include <iostream>

// TODO Beginn

Photographer::Photographer() {}
Photographer::Photographer(std::string name) : name(name) {}

void Photographer::takePhoto()
{
//    for(int i = 0; i < cameras.size(); i++)
//    {
//        cameras[i]->takePhoto();
//    }

    for(Camera* camera : cameras)
    {
        std::cout << name << ": ";
        camera->takePhoto();
    }
}

void Photographer::addCamera(Camera *camera)
{
    cameras.push_back(camera);
}

// TODO Ende