#ifndef ATM_H
#define ATM_H

#include <string>
#include "Account.h"
#include "User.h"

using namespace std;

class ATM
{
	private:
		string name;
		string password;
		
	public:
		//Metodo construtor
		ATM(string, string);
		ATM();
		
		string get_name();
		string get_password();
		
		void set_name(string);
		void set_password(string);
		
		ATM create_password(string);
		ATM create_name(string);
			
		
		void deposit();
		void details();
		void payBills();
		void withdraw();
    	void accountExit();
};
#endif
