#ifndef UTILS_H
#define UTILS_H

#include<map>
#include<string>

#include "passwords.h"
 
using namespace std;

bool login(string name, string password){

	if ((find_user(name))&&(get_password(name)==password)){
		return true;
	}
	
	else return false;
	
}


