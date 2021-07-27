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
    int* getId();
    void setId(int* p_pId);
    //Label
    std::string* getLabel();
    void setLabel(std::string* p_pLabel);

private:
    int m_id;
    std::string m_label;
};