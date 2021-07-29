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
    //Label
    std::string& getLabel();

private:
    int m_id;
    std::string m_label;
};
