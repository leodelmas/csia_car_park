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

Bdd::~Bdd(){}

//Connexion
void Bdd::setConnexion(const char *host, const char *user,const char *passwd,const char *db,unsigned int port,const char *unix_socket,unsigned long client_flag)
{
    if (!mysql_real_connect(&m_Mysql,host,user,passwd,db,port,unix_socket,client_flag))
    {
        std::cout << "Impossible de se connecter à la base de donnée" << std::endl;
    }
}
//Name
void Bdd::fillVector(Vector<Brand, MAX_BRAND>* p_pVector)
{
    assert(NULL != p_pVector);
}
