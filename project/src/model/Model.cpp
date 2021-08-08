///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Model
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Model.h>

Model::Model():
    m_pBrand(NULL)
{}

Model::~Model(){}

//Id
int& Model::getId()
{
    return m_id;
}
void Model::setId(int p_Id)
{
    //TODO: Créer un système d'assert
    m_id = p_Id;
}
//Label
std::string& Model::getLabel()
{
    return m_label;
}
void Model::setLabel(std::string p_Label)
{
    //TODO: Créer un système d'assert
    m_label = p_Label;
}
//Brand
Brand* Model::getBrand()
{
    return m_pBrand;
}
void Model::setBrand(Brand* p_pBrand)
{
    //TODO: Créer un système d'assert
    //dbgAssert(p_pBrand == null);
    //dbgAssert(m_pBrand != null);
    m_pBrand = p_pBrand;
}