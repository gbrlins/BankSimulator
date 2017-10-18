#include "System.h"
#include "ATM.h"

System::System(vector<User> users, vector<Account> accounts, vector<ATM> atms)
{
	this->set_users(users);
	this->set_accounts(accounts);
	this->set_atms(atms);
}

System::System()
{
	this->create_users();
	this->create_accounts();
	this->create_atms();
}

//Metodo Get
vector<User> System::get_users()
{
	return this->users;
}

vector<Account> System::get_accounts()
{
	return this->accounts;
}

vector<ATM> System::get_atms()
{
	return this->atms;
}

//Metodo Set
void System::set_users(vector<User> users)
{
	this->users = users;
	
	string name;
	string cpf;
	string age;
	string gender;
	string password;
	string line;
	User u;
		size_t pos1;
		size_t pos2;
		size_t pos3;
		size_t pos4;
		size_t pos5;
	
	ifstream myfile("users.txt");
	if(myfile.is_open())
	{
		while(getline(myfile,line))
		{
			pos1 = line.find(';');
			name = line.substr(0,pos1);
			u.set_name(name);
			
			pos2 = line.find(';', pos1++);
			cpf = line.substr(1+pos1, pos2-pos1-1);
			u.set_cpf(cpf);
			
			pos3 = line.find(';');
			age = line.substr(1+pos2, pos3-pos2-1);
			u.set_age(age);
			
			pos4 = line.find(';');
			gender = line.substr(1+pos3, pos4-pos3-1);
			u.set_gender(gender);
			
			pos5 = line.find('\n', pos3+1);
			password = line.substr(1+pos4, pos5-pos4-1);
			u.set_password(password);
			
			this->users.push_back(u);			
		}
		myfile.close();
	 } 
	 else cout<<"Can't open file";
}

void System::set_accounts(vector<Account> account)
{
	this->accounts = accounts;
}

void System::set_atms(vector<ATM> atms)
{
	this->atms = atms;
}

void System::create_accounts()
{
	
}

void System::create_users()
{
	//User ubaldo = User("Ubaldo", "23870753153", "30" , "male", "senha?");
	//this->users.push_back(ubaldo);
}
void System::create_atms()
{
	ATM bankofgabriel = ATM("gabriel", "18041996");
}


void System::hello()
{
	string ok;
	system ("Color 1b");
	cout<<"\t\tHello. This is the virtual ATM of Gabriel Bank."<<endl;
	cout<<"\tGabriel Bank is one of the world’s largest banking and financial "<<endl;
	cout<<"\tservices organisations. We serve around 48 million customers "<<endl;
	cout<<"\tthrough four global businesses: Retail Banking and Wealth "<<endl;
	cout<<"\tManagement, Commercial Banking, Global Banking and Markets,"<<endl;
	cout<<"\tand Global Private Banking. Our network covers 72 countries"<<endl;
	cout<<"\tand territories in Europe, Asia, the Middle East and Africa,"<<endl;
	cout<<"\tNorth America and Latin America."<<endl<<endl;
	cout<<"\tWrite 'OK' if you agree with our politics: ";
	cin>>ok;
	system("cls");
	
}

void System::show_menu()
{
	//Label:
	show_menu:
		
	User ATMuser;
	char choice;	
	system ("Color 1b");
		cout<<endl;
		cout<<"============================WELCOME TO ATM GABRIEL============================";
		cout<<endl;
		cout<<"\t\t\t--------------------------"<<endl;
        cout << "\t\tToday's date is: ";
        	time_t rawtime;
        	time(&rawtime);
        	cout<<ctime(&rawtime);
		cout<<"\t\t\t--------------------------"<<endl;
		cout<<"==========================WELCOME TO ATM GABRIEL================================";
		cout<<endl;
		cout<<"\tPress 1 and press Enter to ACCESS YOUR ACCOUNT VIA PIN NUMBER"<<endl;
		cout<<"\tPress 2 and press Enter to CREATE YOUR ACCOUNT"<<endl;
     	cout<<"\tPress 3 and press Enter to HELP"<<endl;
     	cout<<"\tPress 4 and press Enter to EXIT"<<endl<<endl;
     	cout<<"\t\t\t\t";
			
		cin>>choice;
		cin.ignore ();
		system("cls");
	//Opção do cliente:
		switch(choice)
		{
			case '1':
				{
					int i;
					string pin;
				cout<<"============================ATM ACCOUNT ACCESS==================================";
      			cout<<"What is your account Pin access Number? Only one attempts allowed."<<endl; 
      			cout<<"============================COK ACCOUNT ACCESS=================================="<<endl;
				cout<<"\t\t\t\t"<<endl<<endl;
				cout<<"\t\t\t\tPIN: ";    
				cin>>pin;            
      			
				  string line; 
					ifstream myfile ("pin.txt");
					if (myfile.is_open())
					{
						while(getline(myfile,line))
						{
							if(pin == line)
							{
								cout<<"You're logged in";
								system("cls");
								show_menu2();
								
								
							}
							else
							{
								cout<<"I'm sorry. Who are you?"<<endl; 
								cout<<"We closed the ATM for ours clients security'"<<endl;
							}
						}
					}
					myfile.close();
				}break;
			case '2':
				{
					int login, password;
					cout<<"============================ATM ACCOUNT ACCESS==================================";		
					cout<<"ATM ACCOUNT CREATION"<<endl; 
      				cout<<"================================================================================"<<endl;
      				
				ofstream myfile;				
				cout<<"Name: ";
				string user_name;
				std::cin.ignore();
				getline(cin, user_name);
				myfile.open("users.txt",ios::app);
				myfile<<user_name<<";";
				myfile.close();
				
				cout<<"CPF: ";
				string user_cpf;
				getline(cin,user_cpf);
				myfile.open("users.txt",ios::app);
				myfile<<user_cpf<<";";
				myfile.close();
				
				cout<<"Age: ";
				string user_age;
				getline(cin,user_age);
				myfile.open("users.txt",ios::app);
				myfile<<user_age<<";";
				myfile.close();
				
				cout<<"Gender: ";				
				string user_gender;
				getline(cin,user_gender);
				myfile.open("users.txt",ios::app);
				myfile<<user_gender<<";";
				myfile.close();
				
				cout<<"Password: ";
				string user_password;
				getline(cin,user_password);
				myfile.open("users.txt",ios::app);
				myfile<<user_password<<'\n';
				myfile.close();
				
				cout<<"PIN: ";
				string user_pin;
				getline(cin,user_pin);
				myfile.open("pin.txt",ios::app);
				myfile<<user_pin<<'\n';
				myfile.close();
				
				cout<<"Thanks a lot! Now you're one of us!";
				system("cls");
				
				goto show_menu;				
				this->users = users;
				}break;
			case '3':
				{
					char menu;
					cout<<"\t\tWell, we cant virtual help you. We can"<<endl;
					cout<<"\t\tbe in touch with you with number 4002-8922"<<endl;
					cout<<"\t\tOr, visit our site and read the FAQ page."<<endl;
					 cout<<"\t\tMaybe your problem will be solved there."<<endl;
					cout<<"\twww.gabrielbank.com/problems/imfool/iCantdoAnythinkWrite/faq"<<endl<<endl;
					cout<<"\t\tTo go back to menu press M"<<endl;
					cin>>menu;
					
					if(menu =='M'|| menu =='m')
					{
						system("cls");
						goto show_menu;
					}
					}break;
			case '4':
				{
					cout<<"\t\tBye bye!";
					}break;
		}
	}
	
void System::show_menu2()
{
	char escolha;
	cout<<"==========================WELCOME TO ATM GABRIEL================================";
		cout<<endl;
		cout<<"\tPress 1 and press Enter to DEPOSIT"<<endl;
		cout<<"\tPress 2 and press Enter to WITHDRANW"<<endl;
     	cout<<"\tPress 3 and press Enter to PAY BILLS"<<endl;
     	cout<<"\tPress 4 and press Enter to RETURN MENU"<<endl<<endl;
     	cout<<"\t\t\t\t";
			
		cin>>escolha;
		cin.ignore ();
		system("cls");
		
		ATM d;
		switch(escolha)
		{
			
			case '1':
				{
					d.deposit();
				}break;
			
			case'2':
				{
					d.withdraw();
				}break;
			
			case '3':
				{
					d.payBills();
				}break;
			
			case '4':
				{
					d.accountExit();
				}
		}
	
}
	
