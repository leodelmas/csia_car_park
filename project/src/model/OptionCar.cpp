///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: OptionCar
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <OptionCar.h>

OptionCar::OptionCar(){}

OptionCar::~OptionCar(){}

//Id
int& OptionCar::getId()
{
    return m_id;
}
void OptionCar::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_id = p_Id;
}
//Label
std::string& OptionCar::getLabel()
{
    return m_label;
}
void OptionCar::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_label = p_Label;
}