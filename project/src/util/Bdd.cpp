///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#include <Bdd.h>
#include <string.h>
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

void Bdd::insertBrand(const char* p_name){
    char Vl_requete[100] = "INSERT INTO `brand`(`name`) VALUES (";     
    strcat(Vl_requete, p_name);
    strcat(Vl_requete, ")");
    execReq(Vl_requete);
}

//CAR
void Bdd::fillCar(Vector<Car, MAX_CAR>& p_pVectorCar,Vector<Placement, MAX_PLACEMENT>& p_pVectorPlacement,Vector<Motor, MAX_MOTOR>& p_pVectorMotor)
{
    execReq("SELECT id, kilometer, consumption, color, isReserved, releaseDate, idPlacement, idMotor, idModel FROM car");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	Car& l_car = p_pVectorCar.selectOne();
	l_car.setId(atoi(m_Row[0]));
	l_car.setKilometer(atoi(m_Row[1]));
     	l_car.setConsumption(atoi(m_Row[2]));
     	l_car.setColor(m_Row[3]);
     	l_car.setIsReserved(m_Row[4]);
     	l_car.setReleaseDate(/*Year*/0, /*Month*/0, /*Day*/0);
     // A faire crée dans le vector récupere un type de vector par id
     for (int i = 0; i < p_pVectorPlacement.count(); i++){
         Placement& l_Placement = p_pVectorPlacement.getOneElement(i);
         if(l_Placement.getId() == atoi(m_Row[6]))
         {
             l_car.setPlacement(&l_Placement);
         }
     }
    
    for (int i = 0; i < p_pVectorMotor.count(); i++){
         Motor& l_pMotor = p_pVectorMotor.getOneElement(i);
         if(l_pMotor.getId() == atoi(m_Row[7]))
         {
             l_car.setMotor(&l_pMotor);
         }
     }

     //l_car.ListOptionCar
    }
}

//Customer
void Bdd::fillCustomer(Vector<Customer, MAX_CUSTOMER>& p_pVector)
{
    execReq("SELECT id, firstname, lastname, email, phone, gender, address FROM customer");

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
void Bdd::fillFuel(Vector<Fuel, MAX_FUEL>& p_pVector)
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
void Bdd::fillModel(Vector<Model, MAX_MODEL>& p_pVector,Vector<Brand, MAX_BRAND>& p_pVectorBrand)
{
    execReq("SELECT id, label, idBrand FROM model");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Model& l_Model = p_pVector.selectOne();
	 l_Model.setId(atoi(m_Row[0]));
	 l_Model.setLabel(m_Row[1]);
      for (int i = 0; i < p_pVectorBrand.count(); i++){
         Brand& l_pBrand = p_pVectorBrand.getOneElement(i);
         if(l_pBrand.getId() == atoi(m_Row[2]))
         {
             l_Model.setBrand(&l_pBrand);
         }
     }
    }
}

//MOTOR
void Bdd::fillMotor(Vector<Motor, MAX_MOTOR>& p_pVector,Vector<Fuel, MAX_FUEL>& p_pVectorFuel)
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
     for (int i = 0; i < p_pVectorFuel.count(); i++){
         Fuel& l_pFuel = p_pVectorFuel.getOneElement(i);
         if(l_pFuel.getId() == atoi(m_Row[6]))
         {
             l_Motor.setFuel(&l_pFuel);
         }
     }
    }
}

//OptionCar
void Bdd::fillOptionCar(Vector<OptionCar, MAX_OPTION_CAR>& p_pVector)
{
    execReq("SELECT id, label FROM optionCar");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 OptionCar& l_OptionCar = p_pVector.selectOne();
	 l_OptionCar.setId(atoi(m_Row[0]));
	 l_OptionCar.setLabel(m_Row[1]);
    }
}

//Placement
void Bdd::fillPlacement(Vector<Placement, MAX_PLACEMENT>& p_pVector)
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
void Bdd::fillSeller(Vector<Seller, MAX_SELLER>& p_pVector)
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
void Bdd::fillTransaction(Vector<Transaction, MAX_TRANSACTION>& p_pVectorTransaction,Vector<Car, MAX_CAR>& p_pCar,Vector<Seller, MAX_SELLER>& p_pSeller,Vector<Customer, MAX_CUSTOMER>& p_pCustomer)
{
    execReq("SELECT id, sellDate, idCar, idSeller, idCustomer FROM transaction");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Transaction& l_Transaction = p_pVectorTransaction.selectOne();
	 l_Transaction.setId(atoi(m_Row[0]));
	 l_Transaction.setSellDate(/*Year*/0, /*Month*/0, /*Day*/0);

     // A faire crée dans le vector récupere un type de vector par id

     //l_Transaction.setCar(m_Row[2]);
     for (int i = 0; i < p_pCar.count(); i++){
         Car& l_pCar = p_pCar.getOneElement(i);
         if(l_pCar.getId() == atoi(m_Row[2]))
         {
             l_Transaction.setCar(&l_pCar);
         }
     }
     //l_Transaction.setSeller(m_Row[3]);
     for (int i = 0; i < p_pSeller.count(); i++){
         Seller& l_pSeller = p_pSeller.getOneElement(i);
         if(l_pSeller.getId() == atoi(m_Row[3]))
         {
             l_Transaction.setSeller(&l_pSeller);
         }
     }
     //l_Transaction.setCustomer(m_Row[4]);
     for (int i = 0; i < p_pCustomer.count(); i++){
         Customer& l_pCustomer = p_pCustomer.getOneElement(i);
         if(l_pCustomer.getId() == atoi(m_Row[4]))
         {
             l_Transaction.setCustomer(&l_pCustomer);
         }
     }
    }
}
