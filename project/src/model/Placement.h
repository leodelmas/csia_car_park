///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Placement
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Placement
{
public:
    Placement();
    ~Placement();

    //Id
    int& getId();
    //Label
    std::string& getLabel();

private:
    int m_id;
    std::string m_label;
};
