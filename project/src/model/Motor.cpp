///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Motor
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Motor.h>

Motor::Motor():
    m_id(0),
    m_name(""),
    m_cylinder(0.0f),
    m_horsePower(0),
    m_newtonMeter(0),
    m_numberCylinder(0),
    m_pFuel(NULL)
{}

Motor::~Motor(){}

//Id
int& Motor::getId()
{
    return m_id;
}
//Name
std::string& Motor::getName()
{
    return m_name;
}
//Cylinder
float& Motor::getCylinder()
{
    return m_cylinder;
}
//HorsePower
int& Motor::getHorsePower()
{
    return m_horsePower;
}
//NewtonMeter
int& Motor::getNewtonMeter()
{
    return m_newtonMeter;
}
//NumberCylinder
int& Motor::getNumberCylinder()
{
    return m_numberCylinder;
}
//Fuel
Fuel* Motor::getFuel()
{
    return m_pFuel;
}