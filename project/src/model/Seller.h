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
    //LastName
    std::string& getLastName();
    //FirstName
    std::string& getFirstName();

private:
    int m_id;
    std::string m_lastName;
    std::string m_firstName;
};
