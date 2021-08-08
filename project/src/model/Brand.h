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
    void setId(int p_Id);
    //Name
    std::string& getName();
    void setName(const char* p_Name);

private:
    int m_Id;
    std::string m_Name;
};
