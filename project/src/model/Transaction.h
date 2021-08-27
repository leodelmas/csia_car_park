///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: Transacton
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Car.h>
#include <Seller.h>
#include <Customer.h>


class Transaction
{
public:
    Transaction();
    ~Transaction();

    //Id
    int& getId();
    void setId(int p_Id);
    //SellDate
    tm& getSellDate();
    void setSellDate(int p_Year, int p_Month, int p_Day);
    //Car
    Car* getCar();
    void setCar(Car* p_pCar);
    //Seller
    Seller* getSeller();
    void setSeller(Car* p_pSeller);
    //Customer
    Customer* getCustomer();
    void setCustomer(Customer* p_pCustomer);

private:
    int m_Id;
    tm m_SellDate;
    Car* m_pCar;
    Seller* m_pSeller;
    Customer* m_pCustomer;
};
