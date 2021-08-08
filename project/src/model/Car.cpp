///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Car
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Car.h>

Car::Car():
    m_Id(0),
    m_Kilometer(0),
    m_Consumption(0.0f),
    m_Color(""),
    m_IsReserved(false),
    m_ReleaseDate(),
    m_pPlacement(NULL),
    m_pMotor(NULL),
    m_pModel(NULL),
    m_pListOptionCar(NULL)
{
}

Car::~Car(){}

//Id
int& Car::getId()
{
    return m_Id;
}
//Kilometer
int& Car::getKilometer()
{
    return m_Kilometer;
}
//Consumption
float& Car::getConsumption()
{
    return m_Consumption;
}
//Color
std::string& Car::getColor()
{
    return m_Color;
}
//IsReserved
bool& Car::getIsReserved()
{
    return m_IsReserved;
}
//ReleaseDate
tm& Car::getReleaseDate()
{
    return m_ReleaseDate;
}
//Placement
Placement* Car::getPlacement()
{
    return m_pPlacement;
}
//Motor
Motor* Car::getMotor()
{
    return m_pMotor;
}
//Model
Model* Car::getModel()
{
    return m_pModel;
}
//ListOptionCar
OptionCar** Car::getListOptionCar()
{
    return m_pListOptionCar;
}