#include "Account.h"

//OBJETO PARA A CONTA DO USUARIO
//A conta deve ter o numero do usuario e a senha do usuario
Account::Account()
{
}

Account::Account(vector<User> users, vector<User> passwords)
{
	this->set_users(users);
	this->set_passwords(passwords);	
}

//METODO GET
vector<User> Account::get_users()
{
	return this->users;
}

vector<User> Account::get_passwords()
{
	return this->passwords;
}

//METODO SET
void Account::set_users(vector<User> users)
{
	this->users = users;
}

void Account::set_passwords(vector<User> passwords)
{
	this->passwords = passwords;
}
///////////////////////////////////////////////////////////////////
