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
    int* getId();
    void setId(int* p_pId);
    //LastName
    std::string* getLastName();
    void setLastName(std::string* p_pLastName);
    //FirstName
    std::string* getFirstName();
    void setFirstName(std::string* p_pFirstName);

private:
    int m_id;
    std::string m_lastName;
    std::string m_firstName;
};
