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
    const char* getLabel();
    void setLabel(const char* p_Label);

private:
    int m_Id;
    const char* m_Label;
};
