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
	//All
	void fillAll();
    //Brand
    void fillBrand();
    //Car
    void fillCar();
    //Fuel
    void fillFuel();
    //Model
    void fillModel();
    //Motor
    void fillMotor();
    //OptionCar
    void fillOptionCar();
    //Placement
    void fillPlacement();
    //Seller
    void fillSeller();
    //Transaction
    void fillTransaction();
    //Customer
    void fillCustomer();

    //Insert into Brand
    void insertBrand(const char* p_name);

    //Insert into Car
    void insertCar(int p_kilometer,float p_consumption,const char* p_color,bool p_isReserved,int p_sellDate, int p_idPlacement,int p_idMotor,int p_idModel,int p_price);

	void register_Vector(
        Vector<Brand, MAX_BRAND>* p_pListBrand,
        Vector<Car, MAX_CAR>* p_pListCar,
        Vector<Customer, MAX_CUSTOMER>* p_pListCustomer,
        Vector<Model, MAX_MODEL>* p_pListModel,
        Vector<Motor, MAX_MOTOR>* p_pListMotor,
        Vector<OptionCar, MAX_OPTION_CAR>* p_pListOptionCar,
        Vector<Placement, MAX_PLACEMENT>* p_pListPlacement,
        Vector<Seller, MAX_SELLER>* p_pListSeller,
        Vector<Transaction, MAX_TRANSACTION>* p_pListTransaction,
		Vector<Fuel, MAX_FUEL>* p_pListFuel
    );

private:
    //Déclaration d'une variable de type MYSQL
    MYSQL* m_pMysql; 
    MYSQL_RES* m_pReq;
    MYSQL_ROW m_Row;

	Vector<Brand, MAX_BRAND>* m_pListBrand;
    Vector<Car, MAX_CAR>* m_pListCar;
    Vector<Customer, MAX_CUSTOMER>* m_pListCustomer;
    Vector<Model, MAX_MODEL>* m_pListModel;
    Vector<Motor, MAX_MOTOR>* m_pListMotor;
    Vector<Fuel, MAX_FUEL>* m_pListFuel;
    Vector<OptionCar, MAX_OPTION_CAR>* m_pListOptionCar;
    Vector<Placement, MAX_PLACEMENT>* m_pListPlacement;
    Vector<Seller, MAX_SELLER>* m_pListSeller;
    Vector<Transaction, MAX_TRANSACTION>* m_pListTransaction;
};
