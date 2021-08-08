///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Seller
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Seller
{
public:
    Seller();
    ~Seller();

    //Id
    int& getId();
    void setId(int p_Id);
    //LastName
    std::string& getLastName();
    void setLastName(std::string p_LastName);
    //FirstName
    std::string& getFirstName();
    void setFirstName(std::string p_FirstName);

private:
    int m_Id;
    std::string m_LastName;
    std::string m_FirstName;
};
