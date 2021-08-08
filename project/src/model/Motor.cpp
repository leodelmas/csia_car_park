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
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//Name
std::string& Motor::getName()
{
    return m_Name;
}
void Motor::setName(std::string p_Name)
{
    //TODO: Créer un système d'assert
    m_Name = p_Name;
}
//Cylinder
float& Motor::getCylinder()
{
    return m_Cylinder;
}
void Motor::setCylinder(float p_Cylinder)
{
    //TODO: Créer un système d'assert
    m_Cylinder = p_Cylinder;
}
//HorsePower
int& Motor::getHorsePower()
{
    return m_HorsePower;
}
void Motor::setHorsePower(int p_HorsePower)
{
    //TODO: Créer un système d'assert
    m_HorsePower = p_HorsePower;
}
//NewtonMeter
int& Motor::getNewtonMeter()
{
    return m_NewtonMeter;
}
void Motor::setNewtonMetel(int p_NewtonMeter)
{
    //TODO: Créer un système d'assert
    m_NewtonMeter = p_NewtonMeter;
}
//NumberCylinder
int& Motor::getNumberCylinder()
{
    return m_NumberCylinder;
}
void Motor::setNumberCylinder(int p_NumberCylinder)
{
    //TODO: Créer un système d'assert
    m_NumberCylinder = p_NumberCylinder;
}
//Fuel
Fuel* Motor::getFuel()
{
    return m_pFuel;
}
void Motor::setFuel(Fuel* p_pFuel)
{
    //TODO: Créer un système d'assert
    //dbgAssert(p_pFuel == null);
    //dbgAssert(p_pFuel != null);
    m_pFuel = p_pFuel;
}