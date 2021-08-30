///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: OptionCar
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <OptionCar.h>

OptionCar::OptionCar():
    m_Id(0),
    m_Label("")
{}

OptionCar::~OptionCar(){}

//Id
int& OptionCar::getId()
{
    return m_Id;
}
void OptionCar::setId(int p_Id)
{
    m_Id = p_Id;
}
//Label
const char* OptionCar::getLabel()
{
    return m_Label.c_str();
}
void OptionCar::setLabel(const char* p_Label)
{
    m_Label = p_Label;
}
