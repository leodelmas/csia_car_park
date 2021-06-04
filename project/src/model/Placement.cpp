///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Placement
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Placement.h>

Placement::Placement(){}

Placement::~Placement(){}

//Id
int* Placement::getId()
{
    return &m_id;
}
void Placement::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//Label
std::string* Placement::getLabel()
{
    return &m_label;
}
void Placement::setLabel(std::string* p_pLabel)
{
    //TODO: Créer un système d'assert
    m_label = *p_pLabel;
}