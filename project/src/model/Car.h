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
    void setId(int p_Id);
    //Kilometer
    int& getKilometer();
    void setKilometer(int p_Kilometer);
    //Consumption
    float& getConsumption();
    void setConsumption(float p_Consumption);
    //Color
    std::string& getColor();
    void setColor(const char*);
    //IsReserved
    bool& getIsReserved();
    void setIsReserved(bool p_IsReserved);
    //ReleaseDate
    tm& getReleaseDate();
    void setReleaseDate(int p_Year, int p_Month, int p_Day);
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
    OptionCar** getListOptionCar();
    void setListOptionCar(OptionCar* p_pListOptionCar[NB_OPTION_CAR]);

private:
    int m_Id;
    int m_Kilometer;
    float m_Consumption;
    std::string m_Color;
    bool m_IsReserved;
    tm m_ReleaseDate;
    Placement* m_pPlacement;
    Motor* m_pMotor;
    Model* m_pModel;
    OptionCar** m_pListOptionCar; //Tableau d'options
};
