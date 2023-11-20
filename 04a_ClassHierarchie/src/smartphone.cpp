#include "smartphone.h"

#include <string>
#include <iostream>

Smartphone::Smartphone(std::string make, std::string model)
: make_(make)
, model_(model)
{}

void Smartphone::takePhoto()
{
    std::cout << "Taking photo with smartphone " << make_ << " " << model_ << std::endl;
}