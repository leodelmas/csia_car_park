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

    // BDD
   	m_Bdd.setConnexion();
    std::cout << "Chargement en cours..." << std::endl;
    
    m_Bdd.fillBrand(m_ListBrand);
    m_Bdd.fillCustomer(m_ListCustomer);
    m_Bdd.fillFuel(m_ListFuel);
    m_Bdd.fillModel(m_ListModel,m_ListBrand);
    m_Bdd.fillMotor(m_ListMotor,m_ListFuel);
    m_Bdd.fillOptionCar(m_ListOptionCar);
    m_Bdd.fillPlacement(m_ListPlacement);
    m_Bdd.fillSeller(m_ListSeller);
    m_Bdd.fillCar(m_ListCar,m_ListPlacement,m_ListMotor,m_ListModel);
    m_Bdd.fillTransaction(m_ListTransaction,m_ListCar,m_ListSeller,m_ListCustomer);

    // Console
    m_Console.set_Vector(&m_ListBrand, &m_ListCar, &m_ListCustomer, &m_ListModel, &m_ListMotor, &m_ListOptionCar, &m_ListPlacement, &m_ListSeller, &m_ListTransaction);
	m_Console.registerBdd(&m_Bdd);

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
