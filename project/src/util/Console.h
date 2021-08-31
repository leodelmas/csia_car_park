///////////////////////////////////////////////////////////
//  Author: Delmas Léo
//  Class:
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <Assert.h>
#include <Car.h>
#include <Customer.h>
#include <Seller.h>
#include <Vector.h>
#include <Transaction.h>
#include <Bdd.h>

class Console
{

public:
    Console();
    ~Console();

private:
    void display_CarConcatProp(Car& p_Car);
    void display_CarsAvailableList();
    void display_CarsList();
    void display_CustomersList();
    void display_SellersList();
    void display_TransactionsList();
    void display_AddCarForm();
    void display_TransactionDetails();
    void display_InitTransactionForm();
    void display_BrandList();
    void display_ModelList(int p_BrandId);
    void display_MotorList();
    void display_AddCustomerForm();
	
	char* saisie_Char(const char* p_Message);
	int saisie_Int(const char* p_Message, int p_Min, int p_Max);
	float saisie_Float(const char* p_Message, float p_Min, float p_Max);

    Vector<Brand, MAX_BRAND>* m_pListBrand;
    Vector<Car, MAX_CAR>* m_pListCar;
    Vector<Customer, MAX_CUSTOMER>* m_pListCustomer;
    Vector<Model, MAX_MODEL>* m_pListModel;
    Vector<Motor, MAX_MOTOR>* m_pListMotor;
    Vector<OptionCar, MAX_OPTION_CAR>* m_pListOptionCar;
    Vector<Placement, MAX_PLACEMENT>* m_pListPlacement;
    Vector<Seller, MAX_SELLER>* m_pListSeller;
    Vector<Transaction, MAX_TRANSACTION>* m_pListTransaction;
	Vector<Fuel, MAX_FUEL>* m_pListFuel;

	Bdd* m_pBdd;

public:
    void display_Main();
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
	void registerBdd(Bdd* p_pBdd);
};
