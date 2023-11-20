#pragma once

#include <string>
#include <list>

#include <photographer.h>

class Event
{
public:
    Event(std::string name, std::string date);
    void addPhotographer(Photographer* photographer);
    void start();
private:
    std::string name_;
    std::string date_;
    std::list<Photographer*> photographers_;
};