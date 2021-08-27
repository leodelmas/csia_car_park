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
