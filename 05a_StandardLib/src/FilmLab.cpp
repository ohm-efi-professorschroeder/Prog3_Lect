#include "FilmLab.h"

#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

void FilmLab::addOrder(Order* order)
{
    // Index-basierte Iteration
//    for(int i = 0; i < backlog.size(); i++) {
//        if(backlog[i] == order) {
//            cout << "Error: Duplicate order!" << endl;
//            return;
//        }
//    }

    // Iterator-basierte Iteration
    for(auto it = backlog.begin(); it != backlog.end(); it++) {
        if(*it == order) {
            cout << "Error: Duplicate order!" << endl;
            return;
        }
    }

    backlog.push_back(order);
}

void FilmLab::processNextOrder()
{
    //sortBacklog();
    if(!backlog.empty()) {
        auto firstElement = backlog.begin();
        processOrder(*firstElement);
        processed.push_back(*firstElement);
        backlog.erase(firstElement);
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
//    for(int i = 0; i < backlog.size(); i++)
//        cout << *backlog[i] << endl;
    // Iterator-basierte Iteration
    for(auto it = backlog.begin(); it != backlog.end(); it++) {
        cout << **it << endl;
    }
}

void FilmLab::printProcessed() const
{
    cout << "Processed " << endl;
//    for(int i = 0; i < processed.size(); i++)
//        cout << *processed[i] << endl;
    for(auto it = processed.begin(); it != processed.end(); it++) {
        cout << **it << endl;
    }
}

bool compareOrders(const Order* order1, const Order* order2)
{
    return *order1 < *order2;
}

void FilmLab::sortBacklog()
{
    //std::sort(backlog.begin(), backlog.end(), compareOrders);
    backlog.sort(compareOrders);
}

FilmLab::MyContainer FilmLab::retrieveOrders(std::string customerName)
{
    MyContainer ordersToRetrieve;
    for(auto it = processed.begin(); it != processed.end(); it++) {
        if((*it)->getCustomer() == customerName) {
            ordersToRetrieve.push_back(*it);
        }
    }

    for(auto it = ordersToRetrieve.begin(); it != ordersToRetrieve.end(); it++) {
        processed.remove(*it);
    }

    return ordersToRetrieve;
}
