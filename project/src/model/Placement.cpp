///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Placement
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Placement.h>

Placement::Placement():
    m_id(0),
    m_label("")
{}

Placement::~Placement(){}

//Id
int& Placement::getId()
{
    return m_id;
}
//Label
std::string& Placement::getLabel()
{
    return m_label;
}