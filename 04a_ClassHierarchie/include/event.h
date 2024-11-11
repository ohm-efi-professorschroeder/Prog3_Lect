#pragma once

// TODO Beginn
#include <vector>
#include <string>

#include "photographer.h"

class Event
{
private:
    std::vector<Photographer*> photographers;
    std::string date;
    std::string name;

public:
    Event();
    Event(std::string name, std::string date);

    void addPhotographer(Photographer* photographer);
    void start();
};

// TODO Ende