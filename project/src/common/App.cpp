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
    std::system("clear");

	// Register
	m_Console.registerBdd(&m_Bdd);
    m_Bdd.register_Vector(&m_ListBrand, &m_ListCar, &m_ListCustomer, &m_ListModel, &m_ListMotor, &m_ListOptionCar, &m_ListPlacement, 
			&m_ListSeller, &m_ListTransaction, &m_ListFuel);
    m_Console.register_Vector(&m_ListBrand, &m_ListCar, &m_ListCustomer, &m_ListModel, &m_ListMotor, &m_ListOptionCar, &m_ListPlacement, 
			&m_ListSeller, &m_ListTransaction, &m_ListFuel);

    // BDD
   	m_Bdd.setConnexion();
    std::cout << "Chargement en cours..." << std::endl;
    
    m_Bdd.fillAll();

    running();
}

void App::running()
{
    m_Console.display_Main();
    closing();
}

void App::closing()
{
    std::cout << "Fermeture de l'application" << std::endl;
}
