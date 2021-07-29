///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Brand
{
public:
    Brand();
    ~Brand();

    //Id
    int& getId();
    //Name
    std::string& getName();

private:
    int m_id;
    std::string m_name;
};
