///////////////////////////////////////////////////////////
//  Author: Delmas léo
//  Class: Console
//  Brief:
///////////////////////////////////////////////////////////

#include <Console.h>
#include <iostream>

Console::Console() {}

Console::~Console() {}

void Console::display_Main()
{
    int choice;

    do
    {
        display_Line("");
        display_Line("--- BIENVENUE ---");
        display_Line("1. Afficher la liste des véhicules vendus");
        display_Line("2. Afficher la liste des véhicules disponibles");
        display_Line("3. Afficher la liste de tous les véhicules");
        display_Line("4. Afficher la liste des clients");
        display_Line("5. Afficher la liste des vendeurs");
        display_Line("6. Afficher la liste des ventes");
        display_Line("7. Ajouter un véhicule");
        display_Line("8. Détails vente d'un véhicule");
        display_Line("9. Vente d'un véhicule");
        display_Line("10. Quitter");
        display_Line("");

	std::cout << "Votre choix: ";
        std::cin >> choice;

	std::system("clear");

        switch (choice)
        {
            case 1:
                display_CarsSoldList();
                break;
            case 2:
                display_CarsAvailableList();
                break;
            case 3:
                display_CarsList();
                break;
            case 4:
                display_CustomersList();
                break;
            case 5:
                display_SellersList();
                break;
            case 6:
                display_TransactionsList();
                break;
            case 7:
                display_AddCarForm();
                break;
            case 8:
                display_TransactionDetails();
                break;
            case 9:
                display_AddCarForm();
                break;
            case 10:
                exit;
                break;
            default:
                display_Line("Commande inconnue ! :/");
                break;
        }
    } while (choice != 10);
}

void Console::set_Vector(Vector<Brand, MAX_BRAND>* p_pListBrand, Vector<Car, MAX_CAR>* p_pListCar, Vector<Customer, MAX_CUSTOMER>* p_pListCustomer, Vector<Fuel, MAX_FUEL>* p_pListFuel,
                    Vector<Model, MAX_MODEL>* p_pListModel, Vector<Motor, MAX_MOTOR>* p_pListMotor, Vector<OptionCar, MAX_OPTION_CAR>* p_pListOptionCar, Vector<Placement, MAX_PLACEMENT>* p_pListPlacement,
                    Vector<Seller, MAX_SELLER>* p_pListSeller, Vector<Transaction, MAX_TRANSACTION>* p_pListTransaction)
{
    assert(NULL != p_pListBrand);
    assert(NULL != p_pListCar);
    assert(NULL != p_pListCustomer);
    assert(NULL != p_pListFuel);
    assert(NULL != p_pListModel);
    assert(NULL != p_pListMotor);
    assert(NULL != p_pListOptionCar);
    assert(NULL != p_pListPlacement);
    assert(NULL != p_pListSeller);
    assert(NULL != p_pListTransaction);

    m_pListBrand 	= p_pListBrand;
    m_pListCar 		= p_pListCar;
    m_pListCustomer 	= p_pListCustomer;
    m_pListFuel 	= p_pListFuel;
    m_pListModel 	= p_pListModel;
    m_pListMotor 	= p_pListMotor;
    m_pListOptionCar	= p_pListOptionCar;
    m_pListPlacement	= p_pListPlacement;
    m_pListSeller	= p_pListSeller;
    m_pListTransaction	= p_pListTransaction;
}

void Console::display_Line(const char *text)
{
    std::cout << text << std::endl;
}

void Console::display_CarConcatProp(Car& car)
{
	std::cout << " Vehicule " << car.getId() << " " << car.getModel()->getBrand() << " " << car.getModel()->getLabel() << " de " << car.getReleaseDate().tm_year << std::endl;
}

void Console::display_CarsSoldList()
{
    // TODO: Remplacer par une liste de voitures vendues
    display_Line("--- LISTE DES VOITURES VENDUES ---");
    for (int i = 0; i < m_pListCar->count(); i++) {
        Car& l_Car = m_pListCar->getOneElement(i);
        display_CarConcatProp(l_Car);
    }
}

void Console::display_CarsAvailableList()
{
    // TODO: Remplacer par une liste de voitures dispos
    display_Line("--- LISTE DES VOITURES DISPONIBLES ---");
    for (int i = 0; i < m_pListCar->count(); i++) {
        Car& car = m_pListCar->getOneElement(i);
        display_CarConcatProp(car);
    }
}

void Console::display_CarsList()
{
    display_Line("--- LISTE DES VOITURES ---");
    for (int i = 0; i < m_pListCar->count(); i++) {
        Car& car = m_pListCar->getOneElement(i);
        display_CarConcatProp(car);
    }
}

void Console::display_CustomersList()
{
    display_Line("--- LISTE DES CLIENTS ---");
    for (int i = 0; i < m_pListCustomer->count(); i++) {
        Customer& customer = m_pListCustomer->getOneElement(i);
	std::cout << "Client " << customer.getId() << " : " << customer.getLastName() << " " << customer.getFirstName() << std::endl;
    }
}

void Console::display_SellersList()
{
    display_Line("--- LISTE DES VENDEURS ---");
    for (int i = 0; i < m_pListSeller->count(); i++) {
        Seller& seller = m_pListSeller->getOneElement(i);
	std::cout << "Vendeur " << seller.getId() << " : " << seller.getLastName() << " " << seller.getFirstName() << std::endl;
    }
}

void Console::display_TransactionsList()
{
    display_Line("--- LISTE DES VENTES ---");
}

void Console::display_AddCarForm()
{
    int brandId;
    int modelId;
    int fuelId;

    display_Line("--- AJOUTER UNE VOITURE ---");
    display_Line("Entrer l'id de la marque :");
    display_BrandList();
    std::cin >> brandId;
    display_Line("Entrer le modèle :");
    display_ModelList(brandId);
    std::cin >> modelId;
    display_Line("Entrer l'immatriculation :");
    display_Line("Entrer l'énergie :");
    display_FuelList();
    std::cin >> fuelId;
    display_Line("Entrer la transmition :");
    display_Line("Entrer la couleur :");
    display_Line("Entrer le nombre de porte :");
    display_Line("Entrer l'année :");
    display_Line("Entrer le nombre de km :");
    display_Line("Entrer le prix de vente :");
    display_Line("Ajout du véhicule réussi !");
}

void Console::display_TransactionDetails()
{
    display_Line("--- AFFICHER LES DETAILS D'UNE VENTE ---");
}

void Console::display_InitTransactionForm()
{

}

void Console::display_BrandList()
{
    display_Line("--- LISTE DES MARQUES ---");
    for (int i = 0; i < m_pListBrand->count(); i++) {
        Brand& brand = m_pListBrand->getOneElement(i);
	std::cout << "Marque " << brand.getId() << " : " << brand.getName() << std::endl;
    }
}

void Console::display_ModelList(int p_BrandId)
{
    display_Line("--- LISTE DES MARQUES ---");
    for (int i = 0; i < m_pListModel->count(); i++) {
        Model& model = m_pListModel->getOneElement(i);
	std::cout << "Modèle " << model.getId() << " : " << model.getLabel() << std::endl;
    }
}

void Console::display_FuelList()
{
    display_Line("--- LISTE DES ENERGIES ---");
    for (int i = 0; i < m_pListFuel->count(); i++) {
        Fuel& fuel = m_pListFuel->getOneElement(i);
	std::cout << "Energie " << fuel.getId() << " : " << fuel.getLabel() << std::endl;
    }
}
