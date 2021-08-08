#include "utils.h"
#include "passwords.h"

#include<map>
#include<string>
#include<iostream>

using namespace std;

void main()
{
	string name, password;
	getline(cin,name);
	getline(cin,password);
	
	if(login(name,password)){
		cout<<"Success!";
	}
	else cout<<"Login Failed :(";
	
	



}
