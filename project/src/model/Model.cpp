///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Model
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Model.h>

Model::Model():
    m_Id(0),
    m_Label(""),
    m_pBrand(NULL)
{}

Model::~Model(){}

//Id
int& Model::getId()
{
    return m_Id;
}
void Model::setId(int p_Id)
{
    m_Id = p_Id;
}
//Label
const char*& Model::getLabel()
{
    return m_Label;
}
void Model::setLabel(const char* p_Label)
{
    m_Label = p_Label;
}
//Brand
Brand* Model::getBrand()
{
    return m_pBrand;
}
void Model::setBrand(Brand* p_pBrand)
{
    assert(NULL != p_pBrand);
    m_pBrand = p_pBrand;
}
