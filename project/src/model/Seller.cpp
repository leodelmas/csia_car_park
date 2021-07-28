///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Seller
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Seller.h>

Seller::Seller(){}

Seller::~Seller(){}

//Id
int& Seller::getId()
{
    return m_id;
}
void Seller::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_id = p_Id;
}
//LastName
std::string& Seller::getLastName()
{
    return m_lastName;
}
void Seller::setLastName(std::string p_LastName)
{
    //TODO: Créer un système d'assert
    m_lastName = p_LastName;

}
//FirstName
std::string& Seller::getFirstName()
{
    return m_firstName;
}
void Seller::setFirstName(std::string p_FirstName)
{
    //TODO: Créer un système d'assert
    m_firstName = p_FirstName;

}