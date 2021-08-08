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
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//FirstName
std::string& Customer::getFirstName()
{
    return m_FirstName;
}
void Customer::setFirstName(std::string p_FirstName)
{
    //TODO: Créer un système d'assert
    m_FirstName = p_FirstName;
}
//LastName
std::string& Customer::getLastName()
{
    return m_LastName;
}
void Customer::setLastName(std::string p_LastName)
{
    //TODO: Créer un système d'assert
    m_LastName = p_LastName;
}
//Email
std::string& Customer::getEmail()
{
    return m_Email;
}
void Customer::setEmail(std::string p_Email)
{
    //TODO: Créer un système d'assert
    m_Email = p_Email;
}
//Phone
std::string& Customer::getPhone()
{
    return m_Phone;
}
void Customer::setPhone(std::string p_Phone)
{
    //TODO: Créer un système d'assert
    m_Phone = p_Phone;
}
//Gender
std::string& Customer::getGender()
{
    return m_Gender;
}
void Customer::setGender(std::string p_Gender)
{
    //TODO: Créer un système d'assert
    m_Gender = p_Gender;
}
//Address
std::string& Customer::getAddress()
{
    return m_Address;
}
void Customer::setAddress(std::string p_Address)
{
    //TODO: Créer un système d'assert
    m_Address = p_Address;
}