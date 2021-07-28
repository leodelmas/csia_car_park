///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Customer
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Customer.h>

Customer::Customer(){}

Customer::~Customer(){}

//Id
int& Customer::getId()
{
    return m_id;
}
void Customer::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_id = p_Id;
}
//FirstName
std::string& Customer::getFirstName()
{
    return m_firstName;
}
void Customer::setFirstName(std::string p_FirstName)
{
    //TODO: Créer un système d'assert
    m_firstName = p_FirstName;
}
//LastName
std::string& Customer::getLastName()
{
    return m_lastName;
}
void Customer::setLastName(std::string p_LastName)
{
    //TODO: Créer un système d'assert
    m_lastName = p_LastName;
}
//Email
std::string& Customer::getEmail()
{
    return m_email;
}
void Customer::setEmail(std::string p_Email)
{
    //TODO: Créer un système d'assert
    m_email = p_Email;
}
//Phone
std::string& Customer::getPhone()
{
    return m_phone;
}
void Customer::setPhone(std::string p_Phone)
{
    //TODO: Créer un système d'assert
    m_phone = p_Phone;
}
//Gender
std::string& Customer::getGender()
{
    return m_gender;
}
void Customer::setGender(std::string p_Gender)
{
    //TODO: Créer un système d'assert
    m_gender = p_Gender;
}
//Address
std::string& Customer::getAddress()
{
    return m_address;
}
void Customer::setAddress(std::string p_Address)
{
    //TODO: Créer un système d'assert
    m_address = p_Address;
}