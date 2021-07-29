///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Customer
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Customer.h>

Customer::Customer():
    m_id(0),
    m_firstName(""),
    m_lastName(""),
    m_email(""),
    m_phone(""),
    m_gender(""),
    m_address("")
{
}

Customer::~Customer(){}

//Id
int& Customer::getId()
{
    return m_id;
}
//FirstName
std::string& Customer::getFirstName()
{
    return m_firstName;
}
//LastName
std::string& Customer::getLastName()
{
    return m_lastName;
}
//Email
std::string& Customer::getEmail()
{
    return m_email;
}
//Phone
std::string& Customer::getPhone()
{
    return m_phone;
}
//Gender
std::string& Customer::getGender()
{
    return m_gender;
}
//Address
std::string& Customer::getAddress()
{
    return m_address;
}