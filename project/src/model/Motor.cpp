///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Motor
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Motor.h>

Motor::Motor()
{}

Motor::~Motor(){}

//Id
int& Motor::getId()
{
    return m_id;
}
void Motor::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_id = p_Id;
}
//Name
std::string& Motor::getName()
{
    return m_name;
}
void Motor::setName(std::string p_Name)
{
    //TODO: Créer un système d'assert
    m_name = p_Name;
}
//Cylinder
float& Motor::getCylinder()
{
    return m_cylinder;
}
void Motor::setCylinder(float p_Cylinder)
{
    //TODO: Créer un système d'assert
    m_cylinder = p_Cylinder;
}
//HorsePower
int& Motor::getHorsePower()
{
    return m_horsePower;
}
void Motor::setHorsePower(int p_HorsePower)
{
    //TODO: Créer un système d'assert
    m_horsePower = p_HorsePower;
}
//NewtonMeter
int& Motor::getNewtonMeter()
{
    return m_newtonMeter;
}
void Motor::setNewtonMetel(int p_NewtonMeter)
{
    //TODO: Créer un système d'assert
    m_newtonMeter = p_NewtonMeter;
}
//NumberCylinder
int& Motor::getNumberCylinder()
{
    return m_numberCylinder;
}
void Motor::setNumberCylinder(int p_NumberCylinder)
{
    //TODO: Créer un système d'assert
    m_numberCylinder = p_NumberCylinder;
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