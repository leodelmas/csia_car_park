///////////////////////////////////////////////////////////
//  Author: Delmas Léo
//  Class:
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <sstream>
#include <Assert.h>
#include <Car.h>
#include <Customer.h>
#include <Seller.h>
#include <Vector.h>

class Console
{

public:
    Console();
    ~Console();

private:
    void displayLine(const char *text);
    void displayCarConcatProp(Car& car);
    Vector<Car, MAX_CAR>* m_ListCar;
    Vector<Customer, MAX_CUSTOMER>* m_ListCustomer;
    Vector<Seller, MAX_SELLER>* m_ListSeller;
    std::stringstream m_String;

public:
    void displayNavigation();
    void displayCarsSoldList();
    void displayCarsAvailableList();
    void displayCarsList();
    void displayCustomersList();
    void displaySellersList();
    void displayTransactionsList();
    void displayAddCarForm();
    void displayTransactionDetails();
    void displayInitTransactionForm();
};
