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
    int* getId();
    void setId(int* p_pId);
    //FirstName
    std::string* getFirstName();
    void setFirstName(std::string* p_pFirstName);
    //LastName
    std::string* getLastName();
    void setLastName(std::string* p_pLastName);
    //Email
    std::string* getEmail();
    void setEmail(std::string* p_pEmail);
    //Phone
    std::string* getPhone();
    void setPhone(std::string* p_pPhone);
    //Gender
    std::string* getGender();
    void setGender(std::string* p_pGender);
    //Address
    std::string* getAddress();
    void setAddress(std::string* p_pAddress);

private:
    int m_id;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_email;
    std::string m_phone;
    std::string m_gender;
    std::string m_address;
};
