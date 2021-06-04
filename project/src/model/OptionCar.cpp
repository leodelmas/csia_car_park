///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: OptionCar
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <OptionCar.h>

OptionCar::OptionCar(){}

OptionCar::~OptionCar(){}

//Id
int* OptionCar::getId()
{
    return &m_id;
}
void OptionCar::setId(int* p_pId)
{
    //TODO: Créer un système d'assert
    m_id = *p_pId;
}
//Label
std::string* OptionCar::getLabel()
{
    return &m_label;
}
void OptionCar::setLabel(std::string* p_pLabel)
{
    //TODO: Créer un système d'assert
    m_label = *p_pLabel;
}