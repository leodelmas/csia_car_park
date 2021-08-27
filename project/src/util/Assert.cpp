///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Assert
//  Brief: Description file
///////////////////////////////////////////////////////////

#include <Assert.h>

void assertionFailed(const char* p_pFileName, int p_Line)
{
    const char* log_File = "log.txt";
    std::ofstream l_Flux(log_File, std::ios::app);
    
    time_t actuel = time(0);
    tm *ltm = localtime(&actuel);

    if(l_Flux)  
    {
	l_Flux << "======================================================================" << std::endl;
	l_Flux << (1900 + ltm->tm_year) << "/" << 1 + ltm->tm_mon << "/" << ltm->tm_mday << " | " << ltm->tm_hour << ":" << ltm->tm_min << std::endl;
        l_Flux << "ERROR: fileName=" << p_pFileName << " | line=" << p_Line << std::endl;
	l_Flux << "======================================================================" << std::endl;

        l_Flux.close();
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier pour les logs!" << std::endl;
    }

    std::cout << "Le programme a rencontré une erreur et doit se stopper." << std::endl;

    exit(3);
}
