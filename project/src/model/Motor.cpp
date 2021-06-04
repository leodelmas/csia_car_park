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
int* Motor::getId()
{
    return &m_id;
}
void Motor::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//Name
std::string* Motor::getName()
{
    return &m_name;
}
void Motor::setName(std::string* p_pName)
{
    //TODO: Créer un système d'assert
    m_name = *p_pName;
}
//Cylinder
float* Motor::getCylinder()
{
    return &m_cylinder;
}
void Motor::setCylinder(float* p_pCylinder)
{
    //TODO: Créer un système d'assert
    m_cylinder = *p_pCylinder;
}
//HorsePower
int* Motor::getHorsePower()
{
    return &m_horsePower;
}
void Motor::setHorsePower(int* p_pHorsePower)
{
    //TODO: Créer un système d'assert
    m_horsePower = *p_pHorsePower;
}
//NewtonMeter
int* Motor::getNewtonMeter()
{
    return &m_newtonMeter;
}
void Motor::setNewtonMetel(int* p_pNewtonMeter)
{
    //TODO: Créer un système d'assert
    m_newtonMeter = *p_pNewtonMeter;
}
//NumberCylinder
int* Motor::getNumberCylinder()
{
    return &m_numberCylinder;
}
void Motor::setNumberCylinder(int* p_pNumberCylinder)
{
    //TODO: Créer un système d'assert
    m_numberCylinder = *p_pNumberCylinder;
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