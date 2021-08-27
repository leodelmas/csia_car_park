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
                displa
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
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
    m_String =  "Vehicule " + i + ' ' + car.getModel()->getBrand()->getName() + ' ' + car.getModel()->getLabel() + " de " + car.getReleaseDate().tm_year;
    displayLine(m_String);
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
}

void Console::displaySellersList()
{
    displayLine("--- LISTE DES VENDEURS ---");
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