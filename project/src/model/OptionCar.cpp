///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: OptionCar
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <OptionCar.h>

OptionCar::OptionCar():
    m_id(0),
    m_label("")
{}

OptionCar::~OptionCar(){}

//Id
int& OptionCar::getId()
{
    return m_id;
}
//Label
std::string& OptionCar::getLabel()
{
    return m_label;
}