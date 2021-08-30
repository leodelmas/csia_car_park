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
    m_Id = p_Iid;
}
//Label
const char*& Fuel::getLabel()
{
    return m_Label;
}
void Fuel::setLabel(const char* p_Label)
{
    m_Label = p_Label;
}
