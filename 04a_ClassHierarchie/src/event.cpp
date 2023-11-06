#include <event.h>

#include <iostream>

Event::Event(std::string name, std::string datum)
{
    name_ = name;
    datum_ = datum;
}

void Event::addPhotographer(Photographer* fotograf)
{
    photographers_.push_back(fotograf);
}

void Event::start()
{
    std::cout << "Event '" << name_ << "' has started!" << std::endl;
    for(Photographer* fotograf : photographers_)
    {
        fotograf->takePhotos();
    }
}