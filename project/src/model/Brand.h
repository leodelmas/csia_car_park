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
    void setId(int p_pId);
    //Name
    std::string& getName();
    void setName(std::string p_pName);

private:
    int m_id;
    std::string m_name;
};
