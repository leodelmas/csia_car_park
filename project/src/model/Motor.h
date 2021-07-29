///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Motor
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Fuel.h>

class Motor
{
public:
    Motor();
    ~Motor();

    //Id
    int& getId();
    //Name
    std::string& getName();
    //Cylinder
    float& getCylinder();
    //HorsePower
    int& getHorsePower();
    //NewtonMeter
    int& getNewtonMeter();
    //NumberCylinder
    int& getNumberCylinder();
    //Fuel
    Fuel* getFuel();

private:
    int m_id;
    std::string m_name;
    float m_cylinder;
    int m_horsePower;
    int m_newtonMeter;
    int m_numberCylinder;
    Fuel* m_pFuel;
};
