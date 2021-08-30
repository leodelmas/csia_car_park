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
    m_Price(0.0f);
{
}

Car::~Car(){}

//Id
int& Car::getId()
{
    return m_Id;
}
void Car::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//Kilometer
int& Car::getKilometer()
{
    return m_Kilometer;
}
void Car::setKilometer(int p_Kilometer)
{
    //TODO: Créer un système d'assert
    m_Kilometer = p_Kilometer;
}
//Consumption
float& Car::getConsumption()
{
    return m_Consumption;
}
void Car::setConsumption(float p_Consumption)
{
    //TODO: Créer un système d'assert
    m_Consumption = p_Consumption;
}
//Color
std::string& Car::getColor()
{
    return m_Color;
}
void Car::setColor(std::string p_Color)
{
    //TODO: Créer un système d'assert
    m_Color = p_Color;
}
//IsReserved
bool& Car::getIsReserved()
{
    return m_IsReserved;
}
void Car::setIsReserved(bool p_IsReserved)
{
    m_IsReserved = p_IsReserved;
}
//IsSold
bool& Car::getIsSold()
{
    return m_IsSold;
}
void Car::setIsSold(bool p_IsSold)
{
    m_IsSold = p_IsSold;
}
//ReleaseDate
tm& Car::getReleaseDate()
{
    return m_ReleaseDate;
}
void Car::setReleaseDate(int p_Year, int p_Month, int p_Day)
{
    //TODO: Créer un système d'assert
    
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
Vector<OptionCar, NB_OPTION_CAR>& Car::getListOptionCar()
{
    return m_ListOptionCar;
}
//Price
float& Car::getPrice()
{
    return m_Price;
}
void Car::setPrice(float p_Price)
{
    //TODO: Créer un système d'assert
    m_Price = p_Price;
}
