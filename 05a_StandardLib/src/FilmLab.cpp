#include "FilmLab.h"

#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

void FilmLab::addOrder(Order* order)
{
    // Indexed-based iteration
//    for(int i = 0; i < backlog_.size(); i++)
//    {
//        if(backlog_[i] == order)
//        {
//            cout << "Error: Duplicate order!" << endl;
//            return;
//        }
//    }

    for(auto it = backlog_.begin(); it != backlog_.end(); it++)
    {
        if(*it == order)
        {
            cout << "Error: Duplicate order!" << endl;
            return;
        }
    }

    backlog_.push_back(order);
}

void FilmLab::processNextOrder()
{
    sortBacklog();
    // TODO in class
    if(!backlog_.empty())
    {
        auto firstElement = backlog_.begin();
        processOrder(*firstElement);
        processed_.push_back(*firstElement);
        backlog_.erase(firstElement);
    }
}

void FilmLab::processOrder(Order* order)
{
    cout << "Developing order: " << *order << endl;
    order->setProcessed(true);
}

void FilmLab::printBacklog() const
{
    cout << "Backlog: " << endl;
    for(auto it = backlog_.begin(); it != backlog_.end(); it++)
    {
        cout << **it << endl;
    }
}

void FilmLab::printProcessed() const
{
    cout << "Processed: " << endl;
    for(auto it = processed_.begin(); it != processed_.end(); it++)
    {
        cout << **it << endl;
    }
}

bool compareOrders(const Order* order1, const Order* order2)
{
    return *order1 < *order2;
}

void FilmLab::sortBacklog()
{
    //std::sort(backlog_.begin(), backlog_.end(), compareOrders);
    backlog_.sort(compareOrders);
}

FilmLab::MyContainer FilmLab::retrieveOrders(std::string customerName)
{
    MyContainer ordersToRetrieve;
    for(auto it = processed_.begin(); it != processed_.end(); it++)
    {
        if((*it)->getCustomer() == customerName)
        {
            ordersToRetrieve.push_back(*it);
        }
    }

    for(auto it = ordersToRetrieve.begin(); it != ordersToRetrieve.end(); it++)
    {
        processed_.remove(*it);
    }

    return ordersToRetrieve;
}
