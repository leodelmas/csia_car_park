///////////////////////////////////////////////////////////
//  Author: Maitre Tristan
//  Class: Fuel
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Fuel.h>

Fuel::Fuel():
    m_id(0),
    m_label("")
{
}

Fuel::~Fuel(){}

//Id
int& Fuel::getId()
{
    return m_id;
}
//Label
std::string& Fuel::getLabel()
{
    return m_label;
}