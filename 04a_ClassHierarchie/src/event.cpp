#include <event.h>
#include <iostream>

// TODO Beginn

Event::Event(){};
Event::Event(std::string name, std::string date) : date(date), name(name) {}

void Event::addPhotographer(Photographer *photographer)
{
    photographers.push_back(photographer);
}

void Event::start()
{
    std::cout << name << " starts!" << std::endl;
    for(Photographer* photographer : photographers)
    {
        photographer->takePhoto();
    }
}

// TODO Ende