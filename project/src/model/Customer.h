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
    void setId(int p_pId);
    //FirstName
    std::string& getFirstName();
    void setFirstName(std::string p_FirstName);
    //LastName
    std::string& getLastName();
    void setLastName(std::string p_LastName);
    //Email
    std::string& getEmail();
    void setEmail(std::string p_Email);
    //Phone
    std::string& getPhone();
    void setPhone(std::string p_Phone);
    //Gender
    std::string& getGender();
    void setGender(std::string p_Gender);
    //Address
    std::string& getAddress();
    void setAddress(std::string p_Address);

private:
    int m_Id;
    std::string m_FirstName;
    std::string m_LastName;
    std::string m_Email;
    std::string m_Phone;
    std::string m_Gender;
    std::string m_Address;
};
