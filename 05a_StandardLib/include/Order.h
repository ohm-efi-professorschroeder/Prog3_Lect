#pragma once

#include <ctime>
#include <chrono>
#include <string>

class Order
{
private:
    std::string customer_;
    std::string film_;
    std::tm date_;
    bool processed_;

public:
    Order(std::string customer, std::string film, std::tm date);

    bool isProcessed() const;
    void setProcessed(bool processed);

    std::string getCustomer() const;
    std::string getFilm() const;
    std::tm getDate() const;

    friend std::ostream& operator<<(std::ostream &os, const Order &camera);
    // TODO Beginn
    // operator<
    // TODO Ende
};


