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
    //Label
    std::string& getLabel();
    //Brand
    Brand* getBrand();

private:
    int m_id;
    std::string m_label;
    Brand* m_pBrand;
};
