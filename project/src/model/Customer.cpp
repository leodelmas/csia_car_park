///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Customer
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Customer.h>

Customer::Customer(){}

Customer::~Customer(){}

//Id
int* Customer::getId()
{
    return &m_id;
}
void Customer::setId(int* p_id)
{
    //TODO: Créer un système d'assert
    m_id = *p_id;
}
//FirstName
std::string* Customer::getFirstName()
{
    return &m_firstName;
}
void Customer::setFirstName(std::string* p_firstName)
{
    //TODO: Créer un système d'assert
    m_firstName = *p_firstName;
}
//LastName
std::string* Customer::getLastName()
{
    return &m_lastName;
}
void Customer::setLastName(std::string* p_lastName)
{
    //TODO: Créer un système d'assert
    m_lastName = *p_lastName;
}
//Email
std::string* Customer::getEmail()
{
    return &m_email;
}
void Customer::setEmail(std::string* p_email)
{
    //TODO: Créer un système d'assert
    m_email = *p_email;
}
//Phone
std::string* Customer::getPhone()
{
    return &m_phone;
}
void Customer::setPhone(std::string* p_phone)
{
    //TODO: Créer un système d'assert
    m_phone = *p_phone;
}
//Gender
std::string* Customer::getGender()
{
    return &m_gender;
}
void Customer::setGender(std::string* p_gender)
{
    //TODO: Créer un système d'assert
    m_gender = *p_gender;
}
//Address
std::string* Customer::getAddress()
{
    return &m_address;
}
void Customer::setAddress(std::string* p_address)
{
    //TODO: Créer un système d'assert
    m_address = *p_address;
}