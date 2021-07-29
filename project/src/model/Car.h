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

class Car
{
public:
    Car();
    ~Car();

    //Id
    int& getId();
    //Kilometer
    int& getKilometer();
    //Consumption
    float& getConsumption();
    //Color
    std::string& getColor();
    //IsReserved
    bool& getIsReserved();
    //ReleaseDate
    tm& getReleaseDate();
    //Placement
    Placement* getPlacement();
    //Motor
    Motor* getMotor();
    //Model
    Model* getModel();
    //ListOptionCar
    OptionCar** getListOptionCar();

private:
    int m_id;
    int m_kilometer;
    float m_consumption;
    std::string m_color;
    bool m_isReserved;
    tm m_releaseDate;
    Placement* m_pPlacement;
    Motor* m_pMotor;
    Model* m_pModel;
    OptionCar** m_pListOptionCar; //Tableau d'options
};
