///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Placement
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>

class Placement
{
public:
    Placement();
    ~Placement();

    //Id
    int* getId();
    void setId(int* p_pId);
    //Label
    std::string* getLabel();
    void setLabel(std::string* p_pLabel);

private:
    int m_id;
    std::string m_label;
};