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
    const char* getFirstName();
    void setFirstName(const char* p_FirstName);
    //LastName
    const char* getLastName();
    void setLastName(const char* p_LastName);
    //Email
    const char* getEmail();
    void setEmail(const char* p_Email);
    //Phone
    const char* getPhone();
    void setPhone(const char* p_Phone);
    //Gender
    const char* getGender();
    void setGender(const char* p_Gender);
    //Address
    const char* getAddress();
    void setAddress(const char* p_Address);

private:
    int m_Id;
	std::string m_FirstName;
	std::string m_LastName;
	std::string m_Email;
	std::string m_Phone;
   	std::string m_Gender;
	std::string m_Address;
};
