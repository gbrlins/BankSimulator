#include "User.h"

//OBJETO PARA O USUARIO
//O usuario tem que ter nome, idade, e sexo. O que importa para o banco

User::User(string name, string cpf, string age, string gender, string password)
{
	this->set_name(name);
	this->set_cpf(cpf);
	this->set_age(age);
	this->set_gender(gender);
	this->set_password(password);
}

User::User()
{
	this->create_user();
}

//METODO GET
string User::get_name()
{
	return this->name;
}

string User::get_cpf()
{
	return this->cpf;
}

string User::get_age()
{
	return this->age;
}

string User::get_gender()
{
	return this->gender;
}

string User::get_password()
{
	return this->password;
}

//METODO SET
void User::set_name(string name)
{
	this->name = name;
}

void User::set_cpf(string cpf)
{
	this->cpf = cpf;
}

void User::set_age(string age)
{
	this->age = age;
}

void User::set_gender(string gender)
{
	this->gender = gender;
}

void User::set_password(string password)
{
	this->password = password;
}

void User::create_user()
{
	User ubaldo = User("Ubaldo", "23870753153", "30" , "male", "senha?");
	
}






