#include "utils.h"
#include "passwords.h"

#include<map>
#include<string>
#include<iostream>

using namespace std;

void main()
{
	string name, password;
	
	cout<<"Enter Name:";
	getline(cin,name);
	
	cout<<"Enter Password:";
	getline(cin,password);
	
	if(login(name,password)){
		cout<<"Success!";
	}
	else cout<<"Login Failed :(";
	
	



}
