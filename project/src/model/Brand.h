///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Assert.h>

class Brand
{
public:
    Brand();
    ~Brand();

    //Id
    int& getId();
    void setId(int p_Id);
    //Name
    std::string& getName();
    void setName(std::string p_pName);

private:
    int m_Id;
    std::string m_Name;
};
