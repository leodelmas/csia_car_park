///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Customer
//  Brief: 
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Customer
{
public:
    Customer();
    ~Customer();

    //Id
    int* getId();
    void setId(int* p_id);
    //FirstName
    std::string* getFirstName();
    void setFirstName(std::string* p_firstName);
    //LastName
    std::string* getLastName();
    void setLastName(std::string* p_lastName);
    //Email
    std::string* getEmail();
    void setEmail(std::string* p_email);
    //Phone
    std::string* getPhone();
    void setPhone(std::string* p_phone);
    //Gender
    std::string* getGender();
    void setGender(std::string* p_gender);
    //Address
    std::string* getAddress();
    void setAddress(std::string* p_address);

private:
    int m_id;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_email;
    std::string m_phone;
    std::string m_gender;
    std::string m_address;
};
