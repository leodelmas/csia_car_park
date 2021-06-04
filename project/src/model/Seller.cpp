///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Seller
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Seller.h>

Seller::Seller(){}

Seller::~Seller(){}

//Id
int* Seller::getId()
{
    return &m_id;
}
void Seller::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//LastName
std::string* Seller::getLastName()
{
    return &m_lastName;
}
void Seller::setLastName(std::string* p_pLastName)
{
    //TODO: Créer un système d'assert
    m_lastName = *p_pLastName;

}
//FirstName
std::string* Seller::getFirstName()
{
    return &m_firstName;
}
void Seller::setFirstName(std::string* p_pFirstName)
{
    //TODO: Créer un système d'assert
    m_firstName = *p_pFirstName;

}