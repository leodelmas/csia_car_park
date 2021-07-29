///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Customer
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Customer
{
public:
    Customer();
    ~Customer();

    //Id
    int& getId();
    //FirstName
    std::string& getFirstName();
    //LastName
    std::string& getLastName();
    //Email
    std::string& getEmail();
    //Phone
    std::string& getPhone();
    //Gender
    std::string& getGender();
    //Address
    std::string& getAddress();

private:
    int m_id;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_email;
    std::string m_phone;
    std::string m_gender;
    std::string m_address;
};
