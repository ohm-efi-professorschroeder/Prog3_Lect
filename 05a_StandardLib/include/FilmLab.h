#pragma once

#include "Order.h"

#include <vector>
#include <list>

#define N 5
class FilmLab
{
// TODO Beginn


// TODO Ende
private:
// TODO Beginn


// TODO Ende

    static void processOrder(Order* order);

public:
    FilmLab() = default;

    void addOrder(Order* order);
    void processNextOrder();
    void printBacklog() const;
    void printProcessed() const;

    MyContainer retrieveOrders(std::string customerName);

    void sortBacklog();
};