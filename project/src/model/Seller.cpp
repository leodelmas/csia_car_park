///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Seller
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Seller.h>

Seller::Seller():
    m_Id(0),
    m_LastName(""),
    m_FirstName("")
{}

Seller::~Seller(){}

//Id
int& Seller::getId()
{
    return m_Id;
}
void Seller::setId(int p_Id)
{
    m_Id = p_Id;
}
//LastName
const char* Seller::getLastName()
{
    return m_LastName;
}
void Seller::setLastName(const char* p_LastName)
{
    m_LastName = p_LastName;

}
//FirstName
const char* Seller::getFirstName()
{
    return m_FirstName;
}
void Seller::setFirstName(const char* p_FirstName)
{
    m_FirstName = p_FirstName;
}
