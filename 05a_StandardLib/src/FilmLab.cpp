#include "FilmLab.h"

#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

void FilmLab::addOrder(Order* order)
{
    // TODO Beginn


    // TODO Ende
}

void FilmLab::processNextOrder()
{
    sortBacklog();
    // TODO Beginn


    // TODO Ende
}

void FilmLab::processOrder(Order* order)
{
    cout << "Developing order: " << *order << endl;
    order->setProcessed(true);
}

void FilmLab::printBacklog() const
{
    // TODO Beginn


    // TODO Ende
}

void FilmLab::printProcessed() const
{
    // TODO Beginn


    // TODO Ende
}

bool compareOrders(const Order* order1, const Order* order2)
{
    return *order1 < *order2;
}

void FilmLab::sortBacklog()
{
    // TODO Beginn


    // TODO Ende
}

FilmLab::MyContainer FilmLab::retrieveOrders(std::string customerName)
{
    // TODO Beginn


    // TODO Ende
}
