///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Car
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Transaction.h>

Transaction::Transaction():
    m_Id(0),
    m_SellDate(),
    m_pCar(NULL),
    m_pSeller(NULL),
    m_pCustomer(NULL)
{
}

Transaction::~Transaction(){}

//Id
int& Transaction::getId()
{
    return m_Id;
}
void Transaction::setId(int p_Id)
{
    m_Id = p_Id;
}
//ReleaseDate
tm& Transaction::getSellDate()
{
    return m_SellDate;
}
void Transaction::setSellDate(int p_Year, int p_Month, int p_Day)
{
    //TODO: Créer un système d'assert
    
}
//Car
Car* Transaction::getCar()
{
    return m_pCar;
}
void Transaction::setCar(Car* p_pCar)
{
	assert(NULL != p_pCar);
    m_pCar = p_pCar;
}
//Seller
Seller* Transaction::getSeller()
{
    return m_pSeller;
}
void Transaction::setSeller(Seller* p_pSeller)
{
	assert(NULL != p_pSeller);
    m_pSeller = p_pSeller;
}
//Customer
Customer* Transaction::getCustomer()
{
    return m_pCustomer;
}
void Transaction::setCustomer(Customer* p_pCustomer)
{
	assert(NULL != p_pCustomer);
    m_pCustomer = p_pCustomer;
}
