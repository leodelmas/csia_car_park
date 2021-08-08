///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Placement
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Placement.h>

Placement::Placement():
    m_Id(0),
    m_Label("")
{}

Placement::~Placement(){}

//Id
int& Placement::getId()
{
    return m_Id;
}
void Placement::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//Label
std::string& Placement::getLabel()
{
    return m_Label;
}
void Placement::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_Label = p_Label;
}