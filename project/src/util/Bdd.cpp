///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#include <Bdd.h>

Bdd::Bdd():
    m_pReq(NULL)
    ,m_Req()
{
    m_pMysql = mysql_init(NULL);
}

Bdd::~Bdd()
{
    mysql_close(m_pMysql);
    mysql_free_result(m_pReq);
}

//Connexion
void Bdd::setConnexion()
{
    if (!mysql_real_connect(m_pMysql,HOST,USER,PASSWD,DB,PORT,NULL,0))
    {
        std::cout << "Impossible de se connecter à la base de donnée" << std::endl;
	std::cout << mysql_error(m_pMysql) << std::endl;
    }
    else
    {
	std::cout << "Connexion à la base de données réussis" << std::endl;
    }
}

//Requête
void Bdd::execReq(const char* p_Req)
{
    if (mysql_query(m_pMysql, p_Req)) 
    {
        std::cout << mysql_error(m_pMysql) << std::endl;
	assert(false);
    }
    
    m_pReq = mysql_use_result(m_pMysql);
}

//BRAND
void Bdd::fillBrand(Vector<Brand, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, name FROM brand");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Brand& l_Brand = p_pVector.selectOne();
	 l_Brand.setId(atoi(m_Row[0]));
	 l_Brand.setName(m_Row[1]);
    }
}

//CAR
void Bdd::fillCar(Vector<Car, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, kilometer, consumption, color, isReserved, releaseDate, idPlacement, idMotor, idModel FROM Car");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	Car& l_car = p_pVector.selectOne();
	l_car.setId(atoi(m_Row[0]));
	l_car.setKilometer(atoi(m_Row[1]));
     	l_car.setConsumption(atoi(m_Row[2]));
     	l_car.setColor(m_Row[3]);
     	l_car.setIsReserved(m_Row[4]);
     	l_car.setReleaseDate(/*Year*/0, /*Month*/0, /*Day*/0);
     // A faire crée dans le vector récupere un type de vector par id
     //l_car.setPlacement
     //l_car.setMotorset
     //l_car.ListOptionCar
    }
}

//Customer
void Bdd::fillCustomer(Vector<Customer, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, firstname, lastname, email, phone, gender, adress FROM customer");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Customer& l_Customer = p_pVector.selectOne();
	 l_Customer.setId(atoi(m_Row[0]));
	 l_Customer.setFirstName(m_Row[1]);
     l_Customer.setLastName(m_Row[2]);
     l_Customer.setEmail(m_Row[3]);
     l_Customer.setPhone(m_Row[4]);
     l_Customer.setGender(m_Row[5]);
     l_Customer.setAddress(m_Row[6]);
    }
}

//FUEL
void Bdd::fillFuel(Vector<Fuel, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, label FROM fuel");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Fuel& l_Fuel = p_pVector.selectOne();
	 l_Fuel.setId(atoi(m_Row[0]));
	 l_Fuel.setLabel(m_Row[1]);
    }
}

//MODEL
void Bdd::fillModel(Vector<Model, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, label, idBrand FROM model");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Model& l_Model = p_pVector.selectOne();
	 l_Model.setId(atoi(m_Row[0]));
	 l_Model.setLabel(m_Row[1]);
     // A faire crée dans le vector récupere un type de vector par id
     //l_Model.setBrand(m_Row[2]);
    }
}

//MOTOR
void Bdd::fillMotor(Vector<Motor, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, name, cylinder, horsePower, newtonMeter, numberCylinder, idFuel FROM motor");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Motor& l_Motor = p_pVector.selectOne();
	 l_Motor.setId(atoi(m_Row[0]));
	 l_Motor.setName(m_Row[1]);
     l_Motor.setCylinder(atoi(m_Row[2]));
     l_Motor.setHorsePower(atoi(m_Row[3]));
     l_Motor.setNewtonMetel(atoi(m_Row[4]));
     l_Motor.setNumberCylinder(atoi(m_Row[5]));
     // A faire crée dans le vector récupere un type de vector par id
     //l_Motor.setFuel(m_Row[6]);
    }
}

//OptionCar
void Bdd::fillOptionCar(Vector<OptionCar, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, label FROM optioncar");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 OptionCar& l_OptionCar = p_pVector.selectOne();
	 l_OptionCar.setId(atoi(m_Row[0]));
	 l_OptionCar.setLabel(m_Row[1]);
    }
}

//Placement
void Bdd::fillPlacement(Vector<Placement, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, label FROM placement");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Placement& l_Placement = p_pVector.selectOne();
	 l_Placement.setId(atoi(m_Row[0]));
	 l_Placement.setLabel(m_Row[1]);
    }
}

//Seller
void Bdd::fillSeller(Vector<Seller, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, lastname, firstname FROM seller");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Seller& l_Seller = p_pVector.selectOne();
	 l_Seller.setId(atoi(m_Row[0]));
	 l_Seller.setLastName(m_Row[1]);
     l_Seller.setFirstName(m_Row[2]);
    }
}

//Transaction
void Bdd::fillTransaction(Vector<Transaction, MAX_BRAND>& p_pVector)
{
    execReq("SELECT id, sellDate, idCar, idSeller, idCustomer FROM transaction");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Transaction& l_Transaction = p_pVector.selectOne();
	 l_Transaction.setId(atoi(m_Row[0]));
	 l_Transaction.setSellDate(/*Year*/0, /*Month*/0, /*Day*/0);

     // A faire crée dans le vector récupere un type de vector par id

     //l_Transaction.setCar(m_Row[2]);
     //l_Transaction.setSeller(m_Row[3]);
     //l_Transaction.setCustomer(m_Row[4]);
    }
}
