#ifndef USER_H
#define USER_H

#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
							
using namespace std;

class User
{
	private:
		string name;
		string cpf;
		string age;
		string gender;
		string password;
		
	public:
		//Construtor
		User (string, string, string, string, string);
		User ();
		
		//Get
		string get_name();
		string get_cpf();
		string get_age();
		string get_gender();
		string get_password();
		
		//Set
		void set_name(string);
		void set_cpf(string);
		void set_age(string);
		void set_gender(string);
		void set_password(string);
		
		void create_user();
		
};
#endif
