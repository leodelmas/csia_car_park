///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <iostream>
#include <mysql/mysql.h>
#include <Vector.h>
#include <Assert.h>

#include <Brand.h>
#include <DEFINITIONS.h>

#define HOST "127.0.0.1"
#define USER "root"
#define PASSWD ""
#define DB "csia_car_park"
#define PORT 3306

class Bdd
{
public:
    Bdd();
    ~Bdd();

    //Connexion
    void setConnexion();
    //Requête
    void execReq(const char* p_Req);
    //Brand
    void fillBrand(Vector<Brand, MAX_BRAND>& p_pVector);
    //Car
    void fillCar(Vector<Car, MAX_BRAND>& p_pVector);
    //Fuel
    void fillFuel(Vector<Fuel, MAX_BRAND>& p_pVector);
    //Model
    void fillModel(Vector<Model, MAX_BRAND>& p_pVector);
    //Motor
    void fillMotor(Vector<Motor, MAX_BRAND>& p_pVector);
    //OptionCar
    void fillOptionCar(Vector<OptionCar, MAX_BRAND>& p_pVector);
    //Placement
    void fillPlacement(Vector<Placement, MAX_BRAND>& p_pVector);
    //Seller
    void fillSeller(Vector<Seller, MAX_BRAND>& p_pVector);
    //Transaction
    void fillTransaction(Vector<Transaction, MAX_BRAND>& p_pVector);
private:
    //Déclaration d'une variable de type MYSQL
    MYSQL* m_pMysql; 
    MYSQL_RES* m_pReq;
    MYSQL_ROW m_Row;
    std::string m_Req;
};
