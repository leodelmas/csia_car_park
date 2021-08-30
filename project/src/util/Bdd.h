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
#include <Placement.h>
#include <Motor.h>
#include <Brand.h>
#include <Transaction.h>
#include <DEFINITIONS.h>

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
    void fillCar(Vector<Car, MAX_CAR>& p_pVector,Vector<Placement, MAX_PLACEMENT>& p_pVectorPlacement,Vector<Motor, MAX_MOTOR>& p_pVectorMotor);
    //Fuel
    void fillFuel(Vector<Fuel, MAX_FUEL>& p_pVector);
    //Model
    void fillModel(Vector<Model, MAX_MODEL>& p_pVector,Vector<Brand, MAX_BRAND>& p_pVectorBrand);
    //Motor
    void fillMotor(Vector<Motor, MAX_MOTOR>& p_pVector,Vector<Fuel, MAX_FUEL>& p_pVectorFuel);
    //OptionCar
    void fillOptionCar(Vector<OptionCar, MAX_OPTION_CAR>& p_pVector);
    //Placement
    void fillPlacement(Vector<Placement, MAX_PLACEMENT>& p_pVector);
    //Seller
    void fillSeller(Vector<Seller, MAX_SELLER>& p_pVector);
    //Transaction
    void fillTransaction(Vector<Transaction, MAX_TRANSACTION>& p_pVector,Vector<Car, MAX_CAR>& p_pCar,Vector<Seller, MAX_SELLER>& p_pSeller,Vector<Customer, MAX_CUSTOMER>& p_pCustomer);
    //Customer
    void fillCustomer(Vector<Customer, MAX_CUSTOMER>& p_pVector);

    //Insert into Brand
    void insertBrand(const char* p_name);

    //Insert into Car
    void insertCar(int p_kilometer,float p_consumption,const char* p_color,bool p_isReserved,int p_sellDate, int p_idPlacement,int p_idMotor,int p_idModel,int p_price);
private:
    //Déclaration d'une variable de type MYSQL
    MYSQL* m_pMysql; 
    MYSQL_RES* m_pReq;
    MYSQL_ROW m_Row;
    std::string m_Req;
};
