///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: 
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <DEFINITIONS.h>
#include <Brand.h>
#include <Car.h>
#include <Customer.h>
#include <Fuel.h>
#include <Model.h>
#include <Motor.h>
#include <OptionCar.h>
#include <Placement.h>
#include <Seller.h>

class App
{

public:
    App();
    ~App();

private:
    Brand m_ListBrand[MAX_BRAND];
    Car m_ListCar[MAX_CAR];
    Customer m_ListCustomer[MAX_CUSTOMER];
    Fuel m_ListFuel[MAX_FUEL];
    Model m_ListModel[MAX_MODEL];
    Motor m_ListMotor[MAX_MOTOR];
    OptionCar m_ListOptionCar[MAX_OPTION_CAR];
    Placement m_ListPlacement[MAX_PLACEMENT];
    Seller m_ListSeller[MAX_SELLER];
    
public:
    void launch();
};