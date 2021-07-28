///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Car
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Car.h>

Car::Car(){}
Car::~Car(){}

//Id
int* Car::getId()
{
    return &m_id;
}
void Car::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//Kilometer
int* Car::getKilometer()
{
    return &m_kilometer;
}
void Car::setKilometer(int* p_pKilometer)
{
    //TODO: Créer un système d'assert
    m_kilometer = *p_pKilometer;
}
//Consumption
float* Car::getConsumption()
{
    return &m_consumption;
}
void Car::setConsumption(float* p_pConsumption)
{
    //TODO: Créer un système d'assert
    m_consumption = *p_pConsumption;
}
//Color
std::string* Car::getColor()
{
    return &m_color;
}
void Car::setColor(std::string* p_pColor)
{
    //TODO: Créer un système d'assert
    m_color = *p_pColor;
}
//IsReserved
bool* Car::getIsReserved()
{
    return &m_isReserved;
}
void Car::setIsReserved(bool* p_pIsReserved)
{
    //TODO: Créer un système d'assert
    m_isReserved = *p_pIsReserved;
}
//ReleaseDate
tm* Car::getReleaseDate()
{
    return &m_releaseDate;
}
void Car::setReleaseDate(tm* p_pReleaseDate)
{
    //TODO: Créer un système d'assert
    m_releaseDate = *p_pReleaseDate;
}
//Placement
Placement* Car::getPlacement()
{
    return m_pPlacement;
}
void Car::setPlacement(Placement* p_pPlacement)
{
    //TODO: Créer un système d'assert
    m_pPlacement = p_pPlacement;
}
//Motor
Motor* Car::getMotor()
{
    return m_pMotor;
}
void Car::setMotor(Motor* p_pMotor)
{
    //TODO: Créer un système d'assert
    m_pMotor = p_pMotor;
}
//Model
Model* Car::getModel()
{
    return m_pModel;
}
void Car::setModel(Model* p_pModel)
{
    m_pModel = p_pModel;
}
//ListOptionCar
OptionCar** Car::getListOptionCar()
{
    return m_pListOptionCar;
}
void Car::setListOptionCar(OptionCar* p_pListOptionCar[NB_OPTION_CAR])
{
    //TODO: Créer un système d'assert
    m_pListOptionCar = p_pListOptionCar;
}