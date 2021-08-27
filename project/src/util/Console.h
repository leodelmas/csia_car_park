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
    void displayCarsSoldList();
    void displayCarsAvailableList();
    void displayCarsList();
    void displayCustomersList();
    void displaySellersList();
    void displayTransactionsList();
    void displayAddCarForm();
    void displayTransactionDetails();
    void displayInitTransactionForm();
    void displayBrandList();
    void displayModelList(int p_BrandId);
    void displayFuelList();
    Vector<Car, MAX_CAR>* m_ListCar;
    Vector<Customer, MAX_CUSTOMER>* m_ListCustomer;
    Vector<Seller, MAX_SELLER>* m_ListSeller;
    Vector<Brand, MAX_BRAND>* m_ListBrand;
    Vector<Fuel, MAX_FUEL>* m_ListFuel;
    Vector<Model, MAX_MODEL>* m_ListModel;
    std::stringstream m_String;

public:
    void displayMain();
};
