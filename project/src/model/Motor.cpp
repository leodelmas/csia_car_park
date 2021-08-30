///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Motor
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Motor.h>

Motor::Motor():
    m_Id(0),
    m_Name(""),
    m_Cylinder(0.0f),
    m_HorsePower(0),
    m_NewtonMeter(0),
    m_NumberCylinder(0),
    m_pFuel(NULL)
{}

Motor::~Motor(){}

//Id
int& Motor::getId()
{
    return m_Id;
}
void Motor::setId(int p_Id)
{
    m_Id = p_Id;
}
//Name
const char* Motor::getName()
{
    return m_Name.c_str();
}
void Motor::setName(const char* p_Name)
{
    m_Name = p_Name;
}
//Cylinder
float& Motor::getCylinder()
{
    return m_Cylinder;
}
void Motor::setCylinder(float p_Cylinder)
{
    m_Cylinder = p_Cylinder;
}
//HorsePower
int& Motor::getHorsePower()
{
    return m_HorsePower;
}
void Motor::setHorsePower(int p_HorsePower)
{
    m_HorsePower = p_HorsePower;
}
//NewtonMeter
int& Motor::getNewtonMeter()
{
    return m_NewtonMeter;
}
void Motor::setNewtonMetel(int p_NewtonMeter)
{
    m_NewtonMeter = p_NewtonMeter;
}
//NumberCylinder
int& Motor::getNumberCylinder()
{
    return m_NumberCylinder;
}
void Motor::setNumberCylinder(int p_NumberCylinder)
{
    m_NumberCylinder = p_NumberCylinder;
}
//Fuel
Fuel* Motor::getFuel()
{
    return m_pFuel;
}
void Motor::setFuel(Fuel* p_pFuel)
{
    assert(NULL != p_pFuel);
    m_pFuel = p_pFuel;
}
