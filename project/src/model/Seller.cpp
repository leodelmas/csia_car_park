///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Seller
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Seller.h>

Seller::Seller():
    m_id(0),
    m_lastName(""),
    m_firstName("")
{}

Seller::~Seller(){}

//Id
int& Seller::getId()
{
    return m_id;
}
//LastName
std::string& Seller::getLastName()
{
    return m_lastName;
}
//FirstName
std::string& Seller::getFirstName()
{
    return m_firstName;
}