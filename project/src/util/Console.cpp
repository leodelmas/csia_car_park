///////////////////////////////////////////////////////////
//  Author: Delmas léo
//  Class: Console
//  Brief:
///////////////////////////////////////////////////////////

#include <Console.h>
#include <iostream>

Console::Console() {}

Console::~Console() {}

void Console::displayNavigation()
{
    int choice;
    do
    {
        displayLine("--- BIENVENUE ---");
        displayLine("1. Afficher la liste des véhicules vendus");
        displayLine("2. Afficher la liste des véhicules disponibles");
        displayLine("3. Afficher la liste de tous les véhicules");
        displayLine("4. Afficher la liste des clients");
        displayLine("5. Afficher la liste des vendeurs");
        displayLine("6. Afficher la liste des ventes");
        displayLine("7. Ajouter un véhicule");
        displayLine("8. Détails vente d'un véhicule");
        displayLine("9. Vente d'un véhicule");
        displayLine("10. Quitter");

        switch (choice)
        {
            case 1:
                displayCarsSoldList();
                break;
            case 2:
                displayCarsAvailableList();
                break;
            case 3:
                displayCarsList();
                break;
            case 4:
                displayCustomersList();
                break;
            case 5:
                displaySellersList();
                break;
            case 6:
                displayTransactionsList();
                break;
            case 7:
                displayAddCarForm();
                break;
            case 8:
                displayTransactionDetails();
                break;
            case 9:
                displayAddCarForm();
                break;
            case 10:
                displayLine("Bye bye XOXO ! ;D");
                exit;
                break;
            default:
                displayLine("Commande inconnue ! :/");
                break;
        }
    } while (choice != 0);
}

void Console::displayLine(const char *text)
{
    std::cout << text << std::endl;
}

void Console::displayCarConcatProp(Car& car)
{
    m_String << " Vehicule " << car.getId() << " " << car.getModel()->getBrand() << " " << car.getModel()->getLabel() << " de " << car.getReleaseDate().tm_year;
    displayLine(m_String.str().c_str());
}

void Console::displayCarsSoldList()
{
    // TODO: Remplacer par une liste de voitures vendues
    displayLine("--- LISTE DES VOITURES VENDUES ---");
    for (int i; i < m_ListCar->count(); i++) {
        Car& car = m_ListCar->getOneElement(i);
        displayCarConcatProp(car);
    }
}

void Console::displayCarsAvailableList()
{
    // TODO: Remplacer par une liste de voitures dispos
    displayLine("--- LISTE DES VOITURES ---");
    for (int i; i < m_ListCar->count(); i++) {
        Car& car = m_ListCar->getOneElement(i);
        displayCarConcatProp(car);
    }
}

void Console::displayCarsList()
{
    displayLine("--- LISTE DES VOITURES ---");
    for (int i; i < m_ListCar->count(); i++) {
        Car& car = m_ListCar->getOneElement(i);
        displayCarConcatProp(car);
    }
}

void Console::displayCustomersList()
{
    displayLine("--- LISTE DES CLIENTS ---");
    for (int i; i < m_ListCustomer->count(); i++) {
        Customer& customer = m_ListCustomer->getOneElement(i);
        m_String << "Client " << customer.getId() << " : " << customer.getLastName() << " " << customer.getFirstName();
    }
}

void Console::displaySellersList()
{
    displayLine("--- LISTE DES VENDEURS ---");
    for (int i; i < m_ListSeller->count(); i++) {
        Seller& seller = m_ListSeller->getOneElement(i);
        m_String << "Vendeur " << seller.getId() << " : " << seller.getLastName() << " " << seller.getFirstName();
    }
}

void Console::displayTransactionsList()
{
    displayLine("--- LISTE DES VENTES ---");
}

void Console::displayAddCarForm()
{
    displayLine("--- AJOUTER UNE VOITURE ---");
    
}

void Console::displayTransactionDetails()
{
    displayLine("--- AFFICHER LES DETAILS D'UNE VENTE ---");
}

void Console::displayInitTransactionForm()
{

}