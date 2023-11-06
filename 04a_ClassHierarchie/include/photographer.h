#pragma once

#include <list>
#include <string>

#include "camera.h"

class Photographer
{
public:
    Photographer(std::string name);
    void addCamera(Camera* camera);
    void takePhotos();
private:
    std::string name_;
    std::list<Camera*> kameras_;
};