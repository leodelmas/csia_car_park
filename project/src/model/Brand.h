///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: 
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Brand
{
public:
    Brand();
    ~Brand();

    //Id
    int* getId();
    void setId(int* p_id);
    //Name
    std::string* getName();
    void setName(std::string* p_Name);

private:
    int m_id;
    std::string m_name;
};
