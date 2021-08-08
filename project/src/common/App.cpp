///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <App.h>
#include <iostream>
#include <array>

App::App(){}

App::~App(){}

void App::launch()
{
    printf("%d | ",m_ListBrand.count());
    Brand& l_Brand = m_ListBrand.selectOne();
    printf("%d\n",m_ListBrand.count());
    l_Brand.setName("bidou");

    int& l_id = l_Brand.getId(); // Récupération de l'id, attention l_id est la même variable que le return de getId();
    printf("l_id=%d\n", l_id);
    l_id = 5;
    printf("l_Brand.getId()=%d\n\n", l_id = l_Brand.getId());
}

void App::running()
{

}

void App::closing()
{

}