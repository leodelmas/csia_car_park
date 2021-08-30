///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Model
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Brand.h>
#include <Assert.h>

class Model
{
public:
    Model();
    ~Model();

    //Id
    int& getId();
    void setId(int p_Id);
    //Label
    const char* getLabel();
    void setLabel(const char* p_Label);
    //Brand
    Brand* getBrand();
    void setBrand(Brand* p_pBrand);

private:
    int m_Id;
	std::string m_Label;
    Brand* m_pBrand;
};
