///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Brand.h>

Brand::Brand():
    m_id(0),
    m_name("")
{
}

Brand::~Brand(){}

//Id
int& Brand::getId()
{
    return m_id;
}
//Name
std::string& Brand::getName()
{
    return m_name;
}