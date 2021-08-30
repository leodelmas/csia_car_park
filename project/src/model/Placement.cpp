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
    m_Id = p_Id;
}
//Label
const char* Placement::getLabel()
{
    return m_Label;
}
void Placement::setLabel(const char* p_Label)
{
    m_Label = p_Label;
}
