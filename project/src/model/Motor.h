///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Motor
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Fuel.h>

class Motor
{
public:
    Motor();
    ~Motor();

    //Id
    int& getId();
    void setId(int p_Id);
    //Name
    std::string& getName();
    void setName(std::string p_Name);
    //Cylinder
    float& getCylinder();
    void setCylinder(float p_Cylinder);
    //HorsePower
    int& getHorsePower();
    void setHorsePower(int p_HorsePower);
    //NewtonMeter
    int& getNewtonMeter();
    void setNewtonMetel(int p_NewtonMeter);
    //NumberCylinder
    int& getNumberCylinder();
    void setNumberCylinder(int p_NumberCylinder);
    //Fuel
    Fuel* getFuel();
    void setFuel(Fuel* p_pFuel);

private:
    int m_id;
    std::string m_name;
    float m_cylinder;
    int m_horsePower;
    int m_newtonMeter;
    int m_numberCylinder;
    Fuel* m_pFuel;
};
