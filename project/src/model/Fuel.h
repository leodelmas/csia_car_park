///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Fuel
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Fuel
{
public:
    Fuel();
    ~Fuel();

    //Id
    int& getId();
    void setId(int p_Id);
    //Label
    std::string& getLabel();
    void setLabel(std::string p_Label);

private:
    int m_Id;
    std::string m_Label;
};
