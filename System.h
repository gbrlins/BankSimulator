#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>

#include "ATM.h"
#include "Account.h"
#include "User.h"

using namespace std;

class System
{
	private:
		vector<User> users;
		vector<Account> accounts;
		vector<ATM> atms;
		
	public:
		//Metodo construtor
		System(vector<User>, vector<Account>, vector<ATM>);
		System();
		
		//Metodo GET
		vector<User> get_users();
		vector<Account> get_accounts();
		vector<ATM> get_atms();
		
		//Metodo SET
		void set_users(vector<User>);
		void set_accounts(vector<Account>);
		void set_atms(vector<ATM>);
		
		
		
		void login();
		void show_menu();
		void show_menu2();
		void show_users();
		void show_accounts();
		void show_atms();
		void hello();
		
		void create_users();
		void create_accounts();
		void create_atms();
		
};

#endif
