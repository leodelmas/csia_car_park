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
    const char* getLastName();
    void setLastName(const char* p_LastName);
    //FirstName
    const char* getFirstName();
    void setFirstName(const char* p_FirstName);

private:
    int m_Id;
    const char* m_LastName;
    const char* m_FirstName;
};
