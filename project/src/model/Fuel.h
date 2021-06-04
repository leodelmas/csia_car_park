///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Fuel
//  Brief: 
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Fuel
{
public:
    Fuel();
    ~Fuel();

    //Id
    int* getId();
    void setId(int* p_id);
    //Name
    std::string* getLabel();
    void setLabel(std::string* p_label);

private:
    int m_id;
    std::string m_label;
};
