/*
 Für die Aufgabenstellung zu dieser main.cpp schauen Sie bitte in die Datei readme.md!
*/
#include "FilmLab.h"
#include "Order.h"

#include <iostream>

using namespace std;

int main()
{
    FilmLab filmLab;

    std::tm orderDate{};
    orderDate.tm_mday = 15;
    orderDate.tm_mon = 11;
    orderDate.tm_year = 2023;
    Order order01("Bob", "Ilford HP5", orderDate);

    orderDate.tm_mday = 16;
    orderDate.tm_mon = 11;
    orderDate.tm_year = 2023;
    Order order02("Alice", "Portra 400", orderDate);

    orderDate.tm_mday = 16;
    orderDate.tm_mon = 11;
    orderDate.tm_year = 2023;
    Order order03("Caesar", "Gold 200", orderDate);

    orderDate.tm_mday = 18;
    orderDate.tm_mon = 11;
    orderDate.tm_year = 2023;
    Order order04("Alice", "Ektachrome 100", orderDate);

    cout << "Customers dropping off some films to be developed..." << endl;
    filmLab.addOrder(&order01);
    filmLab.addOrder(&order01);
    filmLab.addOrder(&order02);
    filmLab.addOrder(&order03);
    filmLab.addOrder(&order04);
    cout << endl;

    cout << "Backlog of the film lab:" << endl;
    filmLab.printBacklog();
    cout << "Backlog of the film lab, sorted by customer name:" << endl;
    filmLab.sortBacklog();
    filmLab.printBacklog();
    cout << endl;

    cout << "Film lab processing the first order..." << endl;
    filmLab.processNextOrder();
    filmLab.printBacklog();
    filmLab.printProcessed();
    cout << endl;

    cout << "Film lab processing some more orders..." << endl;
    filmLab.processNextOrder();
    filmLab.processNextOrder();
    filmLab.processNextOrder();
    filmLab.processNextOrder();
    cout << endl;

    cout << "Alice fetches her processed orders:" << endl;
    auto alicesFilms = filmLab.retrieveOrders("Alice");
    for(auto order : alicesFilms)
    {
        cout << "- " << *order << endl;
    }
    cout << "The other customers still need to retrieve their developed films..." << endl;
    filmLab.printProcessed();

    return 0;
}