///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Assert
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include <fstream>
#include <ctime>

extern "C" {
    void assertionFailed(const char* p_pFileName, int p_Line);
}

#define assert(Condition) ((Condition) ? (void)0 : assertionFailed( __FILE__,__LINE__))
