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

class Console
{

public:
    Console();
    ~Console();

private:
    void display_CarConcatProp(Car& car);
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

    Vector<Brand, MAX_BRAND>* m_pListBrand;
    Vector<Car, MAX_CAR>* m_pListCar;
    Vector<Customer, MAX_CUSTOMER>* m_pListCustomer;
    Vector<Model, MAX_MODEL>* m_pListModel;
    Vector<Motor, MAX_MOTOR>* m_pListMotor;
    Vector<OptionCar, MAX_OPTION_CAR>* m_pListOptionCar;
    Vector<Placement, MAX_PLACEMENT>* m_pListPlacement;
    Vector<Seller, MAX_SELLER>* m_pListSeller;
    Vector<Transaction, MAX_TRANSACTION>* m_pListTransaction;

public:
    void display_Main();
    void set_Vector(
        Vector<Brand, MAX_BRAND>* p_pListBrand,
        Vector<Car, MAX_CAR>* p_pListCar,
        Vector<Customer, MAX_CUSTOMER>* p_pListCustomer,
        Vector<Model, MAX_MODEL>* p_pListModel,
        Vector<Motor, MAX_MOTOR>* p_pListMotor,
        Vector<OptionCar, MAX_OPTION_CAR>* p_pListOptionCar,
        Vector<Placement, MAX_PLACEMENT>* p_pListPlacement,
        Vector<Seller, MAX_SELLER>* p_pListSeller,
        Vector<Transaction, MAX_TRANSACTION>* p_pListTransaction
    );
};
