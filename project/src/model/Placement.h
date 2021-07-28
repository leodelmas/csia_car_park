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
    int& getId();
    void setId(int p_Id);
    //Label
    std::string& getLabel();
    void setLabel(std::string p_Label);

private:
    int m_id;
    std::string m_label;
};
