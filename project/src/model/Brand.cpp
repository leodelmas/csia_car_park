///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Brand.h>

Brand::Brand(){}

Brand::~Brand(){}

//Id
int* Brand::getId()
{
    return &m_id;
}
void Brand::setId(int* p_id)
{
    //TODO: Créer un système d'assert
    m_id = *p_id;
}
//Name
std::string* Brand::getName()
{
    return &m_name;
}
void Brand::setName(std::string* p_name)
{
    //TODO: Créer un système d'assert
    m_name = *p_name;
}