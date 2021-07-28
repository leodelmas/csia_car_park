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
    void setColor(std::string p_Color);
    //IsReserved
    bool& getIsReserved();
    void setIsReserved(bool p_IsReserved);
    //ReleaseDate
    tm& getReleaseDate();
    void setReleaseDate(tm* p_pReleaseDate);
    //Placement
    Placement* getPlacement();
    void setPlacement(Placement* p_pPlacement);
    //Motor
    Motor* getMotor();
    void setMotor(Motor* p_pMotor);
    //Model
    Model* getModel();
    void setModel(Model* p_pModel);
    //ListOptionCar
    OptionCar** getListOptionCar();
    void setListOptionCar(OptionCar* p_pListOptionCar[NB_OPTION_CAR]);

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
