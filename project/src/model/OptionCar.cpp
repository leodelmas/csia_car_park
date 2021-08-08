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
    //TODO: Créer un système d'assert
    m_Id = p_Id;
}
//Label
std::string& OptionCar::getLabel()
{
    return m_Label;
}
void OptionCar::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_Label = p_Label;
}