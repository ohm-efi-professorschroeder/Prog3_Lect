#include "Order.h"

#include <ostream>

using namespace std;

Order::Order(std::string customer, std::string film, std::tm date)
: customer_(customer)
, film_(film)
, date_(date)
{}

std::string Order::getCustomer() const
{
    return customer_;
}

std::string Order::getFilm() const
{
    return film_;
}

std::tm Order::getDate() const
{
    return date_;
}

void Order::setProcessed(const bool processed)
{
    processed_ = processed;
}

bool Order::isProcessed() const
{
    return processed_;
}

std::ostream& operator<<(std::ostream& os, const Order& order)
{
    return os  << order.film_ << " from " << order.customer_ << ", ordered at "
                << order.date_.tm_mday << "." << order.date_.tm_mon << "." << order.date_.tm_year;
}

// TODO in class: operator<
bool operator<(const Order& order1, const Order& order2)
{
    return order1.getCustomer() < order2.getCustomer();
}