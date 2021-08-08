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
    int& getId();
    void setId(int p_Id);
    //Label
    std::string& getLabel();
    void setLabel(std::string p_Label);
    //Brand
    Brand* getBrand();
    void setBrand(Brand* p_pBrand);

private:
    int m_Id;
    std::string m_Label;
    Brand* m_pBrand;
};
