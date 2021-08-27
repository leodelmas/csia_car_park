///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Brand.h>

Brand::Brand():
    m_Id(0),
    m_Name("")
{
}

Brand::~Brand(){}

//Id
int& Brand::getId()
{
    return m_Id;
}
void Brand::setId(int p_pId)
{

    //TODO: Créer un système d'assert
    m_Id = p_pId;
}
//Name
std::string& Brand::getName()
{
    return m_Name;
}
void Brand::setName(std::string p_pName)
{
    //TODO: Créer un système d'assert
    m_Name = p_pName;
}
