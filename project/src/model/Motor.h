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
    int* getId();
    void setId(int* p_pId);
    //Name
    std::string* getName();
    void setName(std::string* p_pName);
    //Cylinder
    float* getCylinder();
    void setCylinder(float* p_pCylinder);
    //HorsePower
    int* getHorsePower();
    void setHorsePower(int* p_pHorsePower);
    //NewtonMeter
    int* getNewtonMeter();
    void setNewtonMetel(int* p_pNewtonMeter);
    //NumberCylinder
    int* getNumberCylinder();
    void setNumberCylinder(int* p_pNumberCylinder);
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
