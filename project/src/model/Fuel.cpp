///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Fuel
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Fuel.h>

Fuel::Fuel():
    m_Id(0),
    m_Label("")
{
}

Fuel::~Fuel(){}

//Id
int& Fuel::getId()
{
    return m_Id;
}
void Fuel::setId(int p_Iid)
{
    //TODO: Créer un système d'assert
    m_Id = p_Iid;
}
//Label
std::string& Fuel::getLabel()
{
    return m_Label;
}
void Fuel::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_Label = p_Label;
}