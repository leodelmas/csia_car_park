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
    m_Id = p_pId;
}
//Name
const char* Brand::getName()
{
    return m_Name.c_str();
}
void Brand::setName(const char* p_Name)
{
	m_Name = p_Name;
}
