///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#include <Bdd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

Bdd::Bdd() {}

Bdd::~Bdd() {}

//Connexion
void Bdd::setConnexion()
{
    MYSQL *conn;
    char *server = "192.168.0.29";
    char *user = "root";
    //set the password for mysql server here
    char *password = "sylvain"; /* set me first */
    char *database = "csia_car_park";
    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn,server,user,password,database,0,NULL,0))
    {
        std::cout << "Impossible de se connecter à la base de donnée" << std::endl;
	std::cout << mysql_error(conn) << std::endl;
    }
    else
    {
        std::cout << "Connecté" << std::endl;
    }
}
//Name
void Bdd::fillVector(Vector<Brand, MAX_BRAND> *p_pVector)
{
    assert(NULL != p_pVector);
}
