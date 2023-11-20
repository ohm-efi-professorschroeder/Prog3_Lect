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

void FilmLab::sortBacklog()
{
    // TODO in class
}

FilmLab::MyContainer FilmLab::retrieveOrders(std::string customerName)
{
    // TODO in class
    return MyContainer();
}
