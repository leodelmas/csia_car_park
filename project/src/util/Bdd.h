///////////////////////////////////////////////////////////
//  Author: DOURNEAU Maxence
//  Class: BDD
//  Brief: Header file
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#include <mysql.h>
#include <iostream>

#include <string>

class Bdd
{
public:
    Bdd();
    ~Bdd();

    //Connexion
    void setConnexion(&m_Mysql, const char *host, const char *user,const char *passwd,const char *db,unsigned int port,const char *unix_socket,unsigned long client_flag)
    //Name
    void fillVector(Vector* p_pVector);

private:
    //Déclaration d'une variable de type MYSQL
    MYSQL m_Mysql;
  
};
