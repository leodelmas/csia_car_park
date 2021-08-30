///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <App.h>

App::App(){}

App::~App(){}

void App::launch()
{
    // BDD
    m_Bdd.setConnexion();
    std::cout << "Chargement en cours..." << std::endl;
    m_Bdd.fillBrand(m_ListBrand);

    // Console
    m_Console.set_Vector(&m_ListBrand, &m_ListCar, &m_ListCustomer, &m_ListFuel, &m_ListModel, &m_ListMotor,
		    &m_ListOptionCar, &m_ListPlacement, &m_ListSeller, &m_ListTransaction);



    running();
}

void App::running()
{

    while(1) //Stop the while with Console
    {
        closing();
	break;
    }
}

void App::closing()
{
    std::cout << "Fermeture de l'application" << std::endl;
}
