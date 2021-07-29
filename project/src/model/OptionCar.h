///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Fuel
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class OptionCar
{
public:
    OptionCar();
    ~OptionCar();

    //Id
    int& getId();
    //Label
    std::string& getLabel();

private:
    int m_id;
    std::string m_label;
};
