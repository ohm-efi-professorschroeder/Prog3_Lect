#pragma once

#include <list>
#include <string>

#include "IPhotoDevice.h"

class Photographer
{
public:
    Photographer(std::string name);
    void addCamera(IPhotoDevice* camera);
    void takePhotos();
private:
    std::string name_;
    std::list<IPhotoDevice*> cameras_;
};