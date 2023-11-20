#include <event.h>

#include <iostream>

Event::Event(std::string name, std::string date)
: name_(name)
, date_(date)
{
    //name_ = name;
    //datum_ = date;
}

void Event::addPhotographer(Photographer* photographer)
{
    photographers_.push_back(photographer);
}

void Event::start()
{
    std::cout << "Event '" << name_ << "' has started!" << std::endl;
    for(Photographer* photographer : photographers_)
    {
        photographer->takePhotos();
    }
}