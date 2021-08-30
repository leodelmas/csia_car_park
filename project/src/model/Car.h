///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Car
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <ctime>
#include <DEFINITIONS.h>
#include <Placement.h>
#include <Motor.h>
#include <Model.h>
#include <OptionCar.h>
#include <Vector.h>
#include <Assert.h>

class Car
{
public:
    Car();
    ~Car();

    //Id
    int& getId();
    void setId(int p_Id);
    //Kilometer
    int& getKilometer();
    void setKilometer(int p_Kilometer);
    //Consumption
    float& getConsumption();
    void setConsumption(float p_Consumption);
    //Color
    const char* getColor();
    void setColor(const char* p_Color);
    //IsReserved
    bool& getIsReserved();
    void setIsReserved(bool p_IsReserved);
    //IsSold
    bool& getIsSold();
    void setIsSold(bool p_IsSold);
    //ReleaseDate
    int getReleaseDate();
    void setReleaseDate(int p_Year);
    //Placement
    Placement* getPlacement();
    void setPlacement(Placement* const p_Placement);
    //Motor
    Motor* getMotor();
    void setMotor(Motor* const p_Motor);
    //Model
    Model* getModel();
    void setModel(Model* const p_Model);
    //ListOptionCar
    Vector<OptionCar, NB_OPTION_CAR>& getListOptionCar();
    //Price
    float& getPrice();
    void setPrice(float p_Price);

private:
    int m_Id;
    int m_Kilometer;
    float m_Consumption;
	std::string m_Color;
    bool m_IsReserved;
    bool m_IsSold;
    int m_ReleaseDate;
    Placement* m_pPlacement;
    Motor* m_pMotor;
    Model* m_pModel;
    Vector<OptionCar, NB_OPTION_CAR>  m_ListOptionCar;
    float m_Price;
};
