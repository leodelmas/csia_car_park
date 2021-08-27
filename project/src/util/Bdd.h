///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

#include <iostream>
#include <mysql/mysql.h>
#include <mysql.h>
#include <Vector.h>
#include <Assert.h>

#include <Brand.h>
#include <DEFINITIONS.h>


class Bdd
{
public:
    Bdd();
    ~Bdd();

    //Connexion
    void setConnexion(const char *host, const char *user,const char *passwd,const char *db,unsigned int port,const char *unix_socket,unsigned long client_flag);
    //Name
    void fillVector(Vector<Brand, MAX_BRAND>* p_pVector);

private:
    //Déclaration d'une variable de type MYSQL
    MYSQL m_Mysql;
  
};
