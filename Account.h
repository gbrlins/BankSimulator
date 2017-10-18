#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>

#include "User.h"
//#include "ATM.h"

using namespace std;

class Account
{
	private:
		vector<User> users;
		vector<User> passwords;
		
	public:
		Account();
		Account(vector<User>, vector<User>);
		
		//Metodo GET
		vector<User> get_users();
		vector<User> get_passwords();
		
		//Metodo SET
		void set_users(vector<User>);
		void set_passwords(vector<User>);	
		
		
	//Funções
		//void create_account();
		void create_user();
		
};
#endif
