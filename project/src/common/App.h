///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: 
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <DEFINITIONS.h>
#include <Assert.h>
#include <Brand.h>
#include <Car.h>
#include <Customer.h>
#include <Fuel.h>
#include <Model.h>
#include <Motor.h>
#include <OptionCar.h>
#include <Placement.h>
#include <Seller.h>
#include <Vector.h>
#include <Bdd.h>
#include <Console.h>

class App
{

public:
    App();
    ~App();

private:
    Vector<Brand, MAX_BRAND> m_ListBrand;
    Vector<Car, MAX_CAR> m_ListCar;
    Vector<Customer, MAX_CUSTOMER> m_ListCustomer;
    Vector<Fuel, MAX_FUEL> m_ListFuel;
    Vector<Model, MAX_MODEL> m_ListModel;
    Vector<Motor, MAX_MOTOR> m_ListMotor;
    Vector<OptionCar, MAX_OPTION_CAR> m_ListOptionCar;
    Vector<Placement, MAX_PLACEMENT> m_ListPlacement;
    Vector<Seller, MAX_SELLER> m_ListSeller;
    Vector<Transaction, MAX_TRANSACTION> m_ListTransaction;

    Bdd m_Bdd;
    Console m_Console;
    
public:
    void launch();
    void running();
    void closing();
};
