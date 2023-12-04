#pragma once

#include "Order.h"

#include <vector>
#include <list>

#define N 5
class FilmLab
{
    using MyContainer = std::list<Order*>;

private:
    MyContainer backlog_;
    MyContainer processed_;

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