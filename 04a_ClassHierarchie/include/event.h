#pragma once

#include <string>
#include <list>

#include <photographer.h>

class Event
{
public:
    Event(std::string name, std::string datum);
    void addPhotographer(Photographer* fotograf);
    void start();
private:
    std::string name_;
    std::string datum_;
    std::list<Photographer*> photographers_;
};