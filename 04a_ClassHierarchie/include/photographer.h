#pragma once

// TODO Beginn
#include <string>
#include <vector>
#include "camera.h"

class Photographer
{
private:
    std::string name;
    std::vector<Camera*> cameras;
public:
    Photographer();
    Photographer(std::string name);

    void takePhoto();
    void addCamera(Camera* camera);
};

// TODO Ende