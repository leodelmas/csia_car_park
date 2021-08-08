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
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//LastName
std::string& Seller::getLastName()
{
    return m_LastName;
}
void Seller::setLastName(std::string p_LastName)
{
    //TODO: Créer un système d'assert
    m_LastName = p_LastName;

}
//FirstName
std::string& Seller::getFirstName()
{
    return m_FirstName;
}
void Seller::setFirstName(std::string p_FirstName)
{
    //TODO: Créer un système d'assert
    m_FirstName = p_FirstName;

}