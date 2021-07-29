///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Model
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Model.h>

Model::Model():
    m_id(0),
    m_label(""),
    m_pBrand(NULL)
{
}

Model::~Model(){}

//Id
int& Model::getId()
{
    return m_id;
}
//Label
std::string& Model::getLabel()
{
    return m_label;
}
//Brand
Brand* Model::getBrand()
{
    return m_pBrand;
}