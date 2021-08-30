///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Customer
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Customer.h>

Customer::Customer():
    m_Id(0),
    m_FirstName(""),
    m_LastName(""),
    m_Email(""),
    m_Phone(""),
    m_Gender(""),
    m_Address("")
{
}

Customer::~Customer(){}

//Id
int& Customer::getId()
{
    return m_Id;
}
void Customer::setId(int p_Id)
{
    m_Id = p_Id;
}
//FirstName
const char* Customer::getFirstName()
{
    return m_FirstName.c_str();
}
void Customer::setFirstName(const char* p_FirstName)
{
    m_FirstName = p_FirstName;
}
//LastName
const char* Customer::getLastName()
{
    return m_LastName.c_str();
}
void Customer::setLastName(const char* p_LastName)
{
    m_LastName = p_LastName;
}
//Email
const char* Customer::getEmail()
{
    return m_Email.c_str();
}
void Customer::setEmail(const char* p_Email)
{
    m_Email = p_Email;
}
//Phone
const char* Customer::getPhone()
{
    return m_Phone.c_str();
}
void Customer::setPhone(const char* p_Phone)
{
    m_Phone = p_Phone;
}
//Gender
const char* Customer::getGender()
{
    return m_Gender.c_str();
}
void Customer::setGender(const char* p_Gender)
{
    m_Gender = p_Gender;
}
//Address
const char* Customer::getAddress()
{
    return m_Address.c_str();
}
void Customer::setAddress(const char* p_Address)
{
    m_Address = p_Address;
}
