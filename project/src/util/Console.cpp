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
		std::cout << "\n--- BIENVENUE ---" << std::endl;
		std::cout << "1. Afficher la liste des véhicules disponibles" << std::endl;
		std::cout << "2. Afficher la liste de tous les véhicules" << std::endl;
		std::cout << "3. Afficher la liste des clients" << std::endl;
		std::cout << "4. Afficher la liste des vendeurs" << std::endl;
		std::cout << "5. Afficher la liste des ventes" << std::endl;
		std::cout << "6. Ajouter un véhicule" << std::endl;
		std::cout << "7. Détails vente d'un véhicule" << std::endl;
		std::cout << "8. Vente d'un véhicule" << std::endl;
		std::cout << "9. Quitter\n" << std::endl;
		
		std::cout << "Votre choix: ";
        std::cin >> choice;

		std::system("clear");

        switch (choice)
        {
            case 1:
                display_CarsAvailableList();
                break;
            case 2:
                display_CarsList();
                break;
            case 3:
                display_CustomersList();
                break;
            case 4:
                display_SellersList();
                break;
            case 5:
                display_TransactionsList();
                break;
            case 6:
                display_AddCarForm();
                break;
            case 7:
                display_TransactionDetails();
                break;
            case 8:
                display_AddCarForm();
                break;
            case 9:
                exit;
                break;
            default:
				std::cout << "Commande inconnue ! :/" << std::endl;
				if(std::cin.fail())
				{
     				std::cin.clear(); 
					std::cin.ignore();
				}
                break;
        }
    } while (choice != 10);
}

void Console::set_Vector(
    Vector<Brand, MAX_BRAND>* p_pListBrand,
    Vector<Car, MAX_CAR>* p_pListCar,
    Vector<Customer, MAX_CUSTOMER>* p_pListCustomer,
    Vector<Model, MAX_MODEL>* p_pListModel,
    Vector<Motor, MAX_MOTOR>* p_pListMotor,
    Vector<OptionCar, MAX_OPTION_CAR>* p_pListOptionCar,
    Vector<Placement, MAX_PLACEMENT>* p_pListPlacement,
    Vector<Seller, MAX_SELLER>* p_pListSeller,
    Vector<Transaction, MAX_TRANSACTION>* p_pListTransaction
)
{
    assert(NULL != p_pListBrand);
    assert(NULL != p_pListCar);
    assert(NULL != p_pListCustomer);
    assert(NULL != p_pListMotor);
    assert(NULL != p_pListModel);
    assert(NULL != p_pListOptionCar);
    assert(NULL != p_pListPlacement);
    assert(NULL != p_pListSeller);
    assert(NULL != p_pListTransaction);

    m_pListBrand 		= p_pListBrand;
    m_pListCar 			= p_pListCar;
    m_pListCustomer 	= p_pListCustomer;
    m_pListMotor 		= p_pListMotor;
    m_pListModel 		= p_pListModel;
    m_pListOptionCar	= p_pListOptionCar;
    m_pListPlacement	= p_pListPlacement;
    m_pListSeller		= p_pListSeller;
    m_pListTransaction	= p_pListTransaction;
}

void Console::display_CarConcatProp(Car& car)
{
	std::cout << " Vehicule " << car.getId() << " " << car.getModel()->getBrand() << " " << car.getModel()->getLabel() << " de " << car.getReleaseDate().tm_year << std::endl;
}

void Console::display_CarsAvailableList()
{
    // TODO: Remplacer par une liste de voitures dispos
    std::cout << "--- LISTE DES VOITURES DISPONIBLES ---" << std::endl;
    for (int i = 0; i < m_pListCar->count(); i++) {
        Car& car = m_pListCar->getOneElement(i);
        display_CarConcatProp(car);
    }
}

void Console::display_CarsList()
{
    std::cout << "--- LISTE DES VOITURES ---";
    for (int i = 0; i < m_pListCar->count(); i++) {
        Car& car = m_pListCar->getOneElement(i);
        display_CarConcatProp(car);
    }
}

void Console::display_CustomersList()
{
    std::cout << "--- LISTE DES CLIENTS ---" << std::endl;
    std::cout << "Nbr: " << m_pListCustomer->count() << std::endl;
    for (int i = 0; i < m_pListCustomer->count(); i++) {
        Customer& customer = m_pListCustomer->getOneElement(i);
	    std::cout << "Client " << customer.getId() << " : " << customer.getLastName() << " " << customer.getFirstName() << std::endl;
    }
}

void Console::display_SellersList()
{
    std::cout << "--- LISTE DES VENDEURS ---" << std::endl;
    for (int i = 0; i < m_pListSeller->count(); i++) {
        Seller& seller = m_pListSeller->getOneElement(i);
	    std::cout << "Vendeur " << seller.getId() << " : " << seller.getLastName() << " " << seller.getFirstName() << std::endl;
    }
}

void Console::display_TransactionsList()
{
    std::cout << "--- LISTE DES VENTES ---" << std::endl;
}

void Console::display_AddCarForm()
{
    int brandId;
    int modelId;
    int motorId;
    int kilometer;
    char color[255];
    int releaseDate;
    float price;

    std::cout << "--- AJOUTER UNE VOITURE ---" << std::endl;
	std::cout << "Entrer l'id de la marque :" << std::endl;
    display_BrandList();
    std::cin >> brandId;

	std::cout << "Entrer l'id du modèle :" << std::endl;
    display_ModelList(brandId);
    std::cin >> modelId;

    std::cout << "Entrer l'id du moteur :" << std::endl;
    display_MotorList();
    std::cin >> motorId;

    std::cout << "Entrer le nombre de km :" << std::endl;
    std::cin >> kilometer;

	std::cout << "Entrer la couleur :" << std::endl;
    std::cin >> color;

	std::cout << "Entrer l'année :" << std::endl;
    std::cin >> releaseDate;
	
	std::cout << "Entrer le prix de vente :" << std::endl;
    std::cin >> price;

    // TODO: Appel à BDD pour enregistrer

	std::cout << "Ajout du véhicule réussi !" << std::endl;
}

void Console::display_TransactionDetails()
{
	std::cout << "--- AFFICHER LES DETAILS D'UNE VENTE ---" << std::endl;
}

void Console::display_InitTransactionForm()
{

}

void Console::display_BrandList()
{
	std::cout << "--- LISTE DES MARQUES ---" << std::endl;
    for (int i = 0; i < m_pListBrand->count(); i++) {
        Brand& brand = m_pListBrand->getOneElement(i);
	    std::cout << "Marque " << brand.getId() << " : " << brand.getName() << std::endl;
    }
}

void Console::display_ModelList(int p_BrandId)
{
    // TODO : récupérer les modèles de la marque
	std::cout << "--- LISTE DES MARQUES ---" << std::endl;
    for (int i = 0; i < m_pListModel->count(); i++) {
        Model& model = m_pListModel->getOneElement(i);
	    std::cout << "Modèle " << model.getId() << " : " << model.getLabel() << std::endl;
    }
}

void Console::display_MotorList()
{
	std::cout << "--- LISTE DES MOTEURS ---" << std::endl;
    for (int i = 0; i < m_pListMotor->count(); i++) {
        Motor& motor = m_pListMotor->getOneElement(i);
	    std::cout << "Energie " << motor.getId() << " : " << motor.getLabel() << std::endl;
    }
}
