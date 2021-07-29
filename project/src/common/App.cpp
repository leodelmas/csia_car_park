///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <App.h>
#include <iostream>

App::App(){}

App::~App(){}

void App::launch()
{
    m_ListBrand[0].getId() = 2;
    int& l_id = m_ListBrand[0].getId(); // Récupération de l'id, attention l_id est la même variable que le return de getId();
    printf("l_id=%d\n", l_id);
    l_id = 5;
    printf("m_ListBrand[0].getId()=%d\n\n", l_id = m_ListBrand[0].getId());
}