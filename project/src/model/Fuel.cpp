///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Fuel
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Fuel.h>

Fuel::Fuel(){}

Fuel::~Fuel(){}

//Id
int& Fuel::getId()
{
    return m_id;
}
void Fuel::setId(int p_Iid)
{
    //TODO: Créer un système d'assert
    m_id = p_Iid;
}
//Label
std::string& Fuel::getLabel()
{
    return m_label;
}
void Fuel::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_label = p_Label;
}