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
void Brand::setId(int p_Id)
{
    m_Id = p_Id;
}
//Name
std::string& Brand::getName()
{
    return m_Name;
}
void Brand::setName(const char* p_Name)
{
    // Assert if is null p_Name
    m_Name = p_Name;
}