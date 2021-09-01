///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#include <Bdd.h>
#include <string.h>
#include <iostream>
#include <cstdio>

Bdd::Bdd():
    m_pReq(NULL)
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
		assert(false);
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

//All
void Bdd::fillAll()
{
    fillBrand();
    fillCustomer();
    fillFuel();
    fillModel();
    fillMotor();
    fillOptionCar();
    fillPlacement();
    fillSeller();
    fillCar();
    fillTransaction();
}

void Bdd::register_Vector(
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
)
{
    assert(NULL != p_pListBrand);
    assert(NULL != p_pListCar);
    assert(NULL != p_pListCustomer);
    assert(NULL != p_pListMotor);
    assert(NULL != p_pListModel);
    assert(NULL != p_pListOptionCar);
    assert(NULL != p_pListPlacement);
    assert(NULL != p_pListSeller);
    assert(NULL != p_pListTransaction);
    assert(NULL != p_pListFuel);

    m_pListBrand  		= p_pListBrand;
    m_pListCar      	= p_pListCar;
    m_pListCustomer 	= p_pListCustomer;
    m_pListMotor    	= p_pListMotor;
    m_pListModel    	= p_pListModel;
    m_pListOptionCar	= p_pListOptionCar;
    m_pListPlacement	= p_pListPlacement;
    m_pListSeller   	= p_pListSeller;
    m_pListTransaction  = p_pListTransaction;
    m_pListFuel  		= p_pListFuel;
}


//BRAND
void Bdd::fillBrand()
{
	m_pListBrand->clear_all();

    execReq("SELECT id, name FROM brand");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 	Brand& l_Brand = m_pListBrand->selectOne();
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
void Bdd::fillCar()
{
	m_pListCar->clear_all();

    execReq("SELECT id, kilometer, consumption, color, isReserved, releaseDate, idPlacement, idMotor, idModel, price FROM car");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
		Car& l_car = m_pListCar->selectOne();
		l_car.setId(atoi(m_Row[0]));
		l_car.setKilometer(atoi(m_Row[1]));
    	l_car.setConsumption(atoi(m_Row[2]));
    	l_car.setColor(m_Row[3]);
    	l_car.setIsReserved(m_Row[4]);
    	l_car.setReleaseDate(atoi(m_Row[5]));

    	for (int i = 0; i < m_pListPlacement->count(); i++){
  			Placement& l_Placement = m_pListPlacement->getOneElement(i);
        	if(l_Placement.getId() == atoi(m_Row[6]))
        	{
        		l_car.setPlacement(&l_Placement);
    		}
    	}
    
   		for (int i = 0; i < m_pListMotor->count(); i++){
        	Motor& l_pMotor = m_pListMotor->getOneElement(i);
        	if(l_pMotor.getId() == atoi(m_Row[7]))
        	{
        		l_car.setMotor(&l_pMotor);
        	}
		}

    	for (int i = 0; i < m_pListModel->count(); i++){
        	Model& l_Model = m_pListModel->getOneElement(i);
        	if(l_Model.getId() == atoi(m_Row[8]))
        	{
        		l_car.setModel(&l_Model);
        	}
		}

	}
	
	// OptionCar
	for(int i2 = 0; i2 < m_pListCar->count(); i2++)
	{
		Car& l_car = m_pListCar->getOneElement(i2);
		l_car.getListOptionCar().clear_all();
		
		char Vl_Requete[666];
		sprintf(Vl_Requete, "SELECT idOptionCar FROM optionCarList WHERE idCar=%d", l_car.getId());
		execReq(Vl_Requete);
	
   		while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
		{
			for (int i = 0; i < m_pListOptionCar->count(); i++)
			{
				OptionCar& l_OptionCar = m_pListOptionCar->getOneElement(i);
				if(l_OptionCar.getId() == atoi(m_Row[0]))
				{
					l_car.getListOptionCar().selectOne() = l_OptionCar.getId();
				}
			}
		}
	}
}	

char* Bdd::addslashes(const char* str){
	size_t i = 0, x = 0, j = 0, size_x = 0;
	char *str2 = NULL;

	for(i=0; str[i]; i++){
		if(str[i] == 0x5c)
			x++;
		else if(str[i] == 0x27)
			x++;
		else if(str[i] == 0x22)
			x++;
	}

	size_x = x+i+1;

	str2 = (char*) malloc(size_x*sizeof(char));

	for(i=0;str[i];i++){
		char c = str[i];

		if(c == 0x27){
			str2[j] = 0x5c;
			j++;
			str2[j] = c;
		}

		else if(c == 0x5c){
			str2[j] = c;
			j++;
			str2[j] = c;
		}

		else if(c == 0x22){
			str2[j] = 0x5c;
			j++;
			str2[j] = c;
		}

		else {
			str2[j] = c;
		}

		j++;
	}

	str2[j] = 0x0;
	return str2;
}


void Bdd::insertCar(int p_kilometer,float p_consumption,const char* p_color,bool p_isReserved,int p_sellDate, int p_idPlacement,int p_idMotor,int p_idModel,int p_price){
    char Vl_requete[666];     
    sprintf(Vl_requete, "INSERT INTO `car`( `kilometer`, `consumption`, `color`, `isReserved`, `releaseDate`, `idPlacement`, `idMotor`, `idModel`, `price`)" 
			" VALUES (%d,%f,'%s',%d,%d,%d,%d,%d,%d)", p_kilometer,p_consumption,addslashes(p_color),p_isReserved,p_sellDate,p_idPlacement,p_idMotor,p_idModel,p_price);
    execReq(Vl_requete);
}

void Bdd::insertCustomer(const char* p_FirstName,const char* p_LastName,const char* p_Email, const char* p_Phone, const char* p_Gender, const char* p_Address)
{
	char Vl_Requete[666];
	sprintf(Vl_Requete, "INSERT INTO `customer`(`firstname`, `lastname`, `email`, `phone`, `gender`, `address`) VALUES ('%s','%s','%ss','%s','%s','%s')", addslashes(p_FirstName), addslashes(p_LastName), addslashes(p_Email), addslashes(p_Phone), addslashes(p_Gender), addslashes(p_Address));
	execReq(Vl_Requete);
}

void Bdd::insertTransaction(int p_CarId, int p_SellerId, int p_CustomerId)
{
	char Vl_Requete[666];
	time_t actuel = time(0);
	tm *ltm = localtime(&actuel);

	sprintf(Vl_Requete, "INSERT INTO transaction(sellDate,idCar,idSeller,idCustomer) VALUES ('%d/%d/%d',%d,%d,%d)", (1900 +ltm->tm_year), (1 + ltm->tm_mon), ltm->tm_mday, p_CarId, p_SellerId, p_CustomerId);
	std::cout << Vl_Requete << std::endl;
	execReq(Vl_Requete);
}

//Customer
void Bdd::fillCustomer()
{
	m_pListCustomer->clear_all();

    execReq("SELECT id, firstname, lastname, email, phone, gender, address FROM customer");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Customer& l_Customer = m_pListCustomer->selectOne();
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
void Bdd::fillFuel()
{
	m_pListFuel->clear_all();

    execReq("SELECT id, label FROM fuel");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Fuel& l_Fuel = m_pListFuel->selectOne();
	 l_Fuel.setId(atoi(m_Row[0]));
	 l_Fuel.setLabel(m_Row[1]);
    }
}

//MODEL
void Bdd::fillModel()
{
	m_pListModel->clear_all();

    execReq("SELECT id, label, idBrand FROM model");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Model& l_Model = m_pListModel->selectOne();
	 l_Model.setId(atoi(m_Row[0]));
	 l_Model.setLabel(m_Row[1]);
      for (int i = 0; i < m_pListBrand->count(); i++){
         Brand& l_pBrand = m_pListBrand->getOneElement(i);
         if(l_pBrand.getId() == atoi(m_Row[2]))
         {
             l_Model.setBrand(&l_pBrand);
         }
     }
    }
}

//MOTOR
void Bdd::fillMotor()
{
	m_pListMotor->clear_all();

    execReq("SELECT id, name, cylinder, horsePower, newtonMeter, numberCylinder, idFuel FROM motor");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Motor& l_Motor = m_pListMotor->selectOne();
	 l_Motor.setId(atoi(m_Row[0]));
	 l_Motor.setName(m_Row[1]);
     l_Motor.setCylinder(atoi(m_Row[2]));
     l_Motor.setHorsePower(atoi(m_Row[3]));
     l_Motor.setNewtonMetel(atoi(m_Row[4]));
     l_Motor.setNumberCylinder(atoi(m_Row[5]));

     for (int i = 0; i < m_pListFuel->count(); i++){
         Fuel& l_pFuel = m_pListFuel->getOneElement(i);
         if(l_pFuel.getId() == atoi(m_Row[6]))
         {
             l_Motor.setFuel(&l_pFuel);
         }
     }
    }
}

//OptionCar
void Bdd::fillOptionCar()
{
	m_pListOptionCar->clear_all();

    execReq("SELECT id, label FROM optionCar");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 OptionCar& l_OptionCar = m_pListOptionCar->selectOne();
	 l_OptionCar.setId(atoi(m_Row[0]));
	 l_OptionCar.setLabel(m_Row[1]);
    }
}

//Placement
void Bdd::fillPlacement()
{
	m_pListPlacement->clear_all();

    execReq("SELECT id, label FROM placement");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Placement& l_Placement = m_pListPlacement->selectOne();
	 l_Placement.setId(atoi(m_Row[0]));
	 l_Placement.setLabel(m_Row[1]);
    }
}

//Seller
void Bdd::fillSeller()
{
	m_pListSeller->clear_all();

    execReq("SELECT id, lastname, firstname FROM seller");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Seller& l_Seller = m_pListSeller->selectOne();
	 l_Seller.setId(atoi(m_Row[0]));
	 l_Seller.setLastName(m_Row[1]);
     l_Seller.setFirstName(m_Row[2]);
    }
}

//Transaction
void Bdd::fillTransaction()
{
	m_pListTransaction->clear_all();

	execReq("SELECT `id`, YEAR(`sellDate`), MONTH(`sellDate`), DAY(`sellDate`), `idCar`, `idSeller`, `idCustomer` FROM `transaction`");

    while ((m_Row = mysql_fetch_row(m_pReq)) != NULL)
    {
	 Transaction& l_Transaction = m_pListTransaction->selectOne();
	 l_Transaction.setId(atoi(m_Row[0]));
	 l_Transaction.setSellDate(atoi(m_Row[1]), atoi(m_Row[2]), atoi(m_Row[3]));

     for (int i = 0; i < m_pListCar->count(); i++){
         Car& l_pCar = m_pListCar->getOneElement(i);
         if(l_pCar.getId() == atoi(m_Row[4]))
         {
             l_Transaction.setCar(&l_pCar);
         }
     }

     for (int i = 0; i < m_pListSeller->count(); i++){
         Seller& l_pSeller = m_pListSeller->getOneElement(i);
         if(l_pSeller.getId() == atoi(m_Row[5]))
         {
             l_Transaction.setSeller(&l_pSeller);
         }
     }

     for (int i = 0; i < m_pListCustomer->count(); i++){
         Customer& l_pCustomer = m_pListCustomer->getOneElement(i);
         if(l_pCustomer.getId() == atoi(m_Row[6]))
         {
             l_Transaction.setCustomer(&l_pCustomer);
         }
     }
    }
}
