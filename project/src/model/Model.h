///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Model
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Brand.h>

class Model
{
public:
    Model();
    ~Model();

    //Id
    int* getId();
    void setId(int* p_pId);
    //Label
    std::string* getLabel();
    void setLabel(std::string* p_pLabel);
    //Brand
    Brand* getBrand();
    void setBrand(Brand* p_pBrand);

private:
    int m_id;
    std::string m_label;
    Brand* m_pBrand;
};
