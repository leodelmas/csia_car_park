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
void Bdd::setConnexion()
{
    std::cout << HOST << std::endl;
    if (!mysql_real_connect(&m_Mysql,HOST,USER,PASSWD,DB,PORT,NULL,0))
    {
        std::cout << "Impossible de se connecter à la base de donnée" << std::endl;
	std::cout << mysql_error(&m_Mysql) << std::endl;
    }
    else
    {
	std::cout << "Connecté" << std::endl;
    }
}
//Name
void Bdd::fillVector(Vector<Brand, MAX_BRAND>* p_pVector)
{
    assert(NULL != p_pVector);
}
