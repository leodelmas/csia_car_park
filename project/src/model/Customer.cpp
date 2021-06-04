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
void Customer::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//FirstName
std::string* Customer::getFirstName()
{
    return &m_firstName;
}
void Customer::setFirstName(std::string* p_pFirstName)
{
    //TODO: Créer un système d'assert
    m_firstName = *p_pFirstName;
}
//LastName
std::string* Customer::getLastName()
{
    return &m_lastName;
}
void Customer::setLastName(std::string* p_pLastName)
{
    //TODO: Créer un système d'assert
    m_lastName = *p_pLastName;
}
//Email
std::string* Customer::getEmail()
{
    return &m_email;
}
void Customer::setEmail(std::string* p_pEmail)
{
    //TODO: Créer un système d'assert
    m_email = *p_pEmail;
}
//Phone
std::string* Customer::getPhone()
{
    return &m_phone;
}
void Customer::setPhone(std::string* p_pPhone)
{
    //TODO: Créer un système d'assert
    m_phone = *p_pPhone;
}
//Gender
std::string* Customer::getGender()
{
    return &m_gender;
}
void Customer::setGender(std::string* p_pGender)
{
    //TODO: Créer un système d'assert
    m_gender = *p_pGender;
}
//Address
std::string* Customer::getAddress()
{
    return &m_address;
}
void Customer::setAddress(std::string* p_pAddress)
{
    //TODO: Créer un système d'assert
    m_address = *p_pAddress;
}