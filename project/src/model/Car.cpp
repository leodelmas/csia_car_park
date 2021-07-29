///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Car
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Car.h>

Car::Car():
    m_id(0),
    m_kilometer(0),
    m_consumption(0.0f),
    m_color(""),
    m_isReserved(false),
    m_releaseDate(),
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
    return m_id;
}
//Kilometer
int& Car::getKilometer()
{
    return m_kilometer;
}
//Consumption
float& Car::getConsumption()
{
    return m_consumption;
}
//Color
std::string& Car::getColor()
{
    return m_color;
}
//IsReserved
bool& Car::getIsReserved()
{
    return m_isReserved;
}
//ReleaseDate
tm& Car::getReleaseDate()
{
    return m_releaseDate;
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