#include "ATM.h"
#include "Extern.h"
#include "System.h"

//OBJETO PARA A MAQUINA DE SIMULAÇÃO
//A maquina deve ter acesso ao nome, numero, senha do usuario

ATM::ATM()
{
	
} 

ATM::ATM(string name, string password)
{
	this->set_name(name);	
	this->set_password(password);
}

//metodo GET-----------------------------------
string ATM::get_name()
{
	return this->name;
}

string ATM::get_password()
{
	return this->password;
}

//metodo SET-----------------------------------
void ATM::set_password(string password)
{
	this->password = password;
	
}
void ATM::set_name(string name)
{
	this->name = name;
}

void ATM::deposit()
{
	float amount;
	system("cls");
	cout<<"==========================WELCOME TO ATM GABRIEL================================";
		cout<<endl;
		cout<<"==============================Deposit System===================================="<<endl;
		cout<<"Welcome Mr(s), isn't a such good day to save money?"<<endl;
     	cout<<"\tStarting account balance: $";
     	cout<<startBalance<<endl;
     	cout<<"\tPresent available balance: $";
     	cout<<accountBalance<<endl;
     	cout<<"Enter the amount to be deposited: $";
     	cin>>amount;
     	
     	accountBalance = startBalance+amount;
     	cout<<"Your new available balanced amount is $";
     	cout<<accountBalance<<endl;
     	cout<<"Thank you to trust us!"<<endl<<endl;
     	system("pause");
}

void ATM::withdraw()
{
	System a;
	char tecla;
	float amount;
	system("cls");
		cout<<"==============================Withdrawal System================================="<<endl;
		cout<<"Welcome Mr(s), isn't a such good day to burn money?"<<endl;
     	cout<<"\tStarting account balance: $";
     	cout<<startBalance<<endl;
     	cout<<"\tPresent available balance: $";
     	cout<<accountBalance<<endl;
     	cout<<"Enter the amount to be withdrawn: $";
     	cin>>amount;
     	
     	if(amount > accountBalance)
     	{
     		cout<<"\tInsufficient available balance in your account."<<endl;
     		cout<<"\t\t\tSorry!!! :("<<endl;
     		cout<<"Press any key to return to the main menu";
			cin>>tecla;
			a.show_menu2();
			
     		system("pause");
		}
		else
		{
			char tecla;
			accountBalance = startBalance - amount;
			cout<<"Your new available balanced amount is $"<<accountBalance<<endl;
			cout<<"Press any key to return to the main menu";
			cin>>tecla;
			a.show_menu2();
			
			system("pause");		
		}
}
void ATM::payBills()
{
	int choice_t;
	do{
		system("cls");
		cout<<"==============================Payment System menu==================================="<<endl;
		cout << "\t\tEnter (1) for Casas Bahia Payment" << endl;
        cout << "\t\tEnter (2) for Verdurao da Ceboala Payment" << endl;
        cout << "\t\tEnter (3) for Ponto Frio Payment" << endl;
        cout << "\t\tEnter (0) to Exit Bill Payment System" << endl;
        cout << "\t\tPLEASE ENTER A SELECTION AND PRESS ENTER:"<<endl;
        cout<<"================================COK MAIN MENU=================================="<<endl<<endl;
	    
         cin>>choice_t;
         
                switch (choice_t){
            case 1:
        		system("cls");
				cout<<"Pay this month's Casas Bahia bill of $2000.00 now?"<<endl;
        		cout<<"\t\t\tPress 1 for Yes OR Press 0 for No"<<endl;
        		int answer;
				cin>>answer;
				
				if(answer==1)
					{
						char tecla;
						System a;
         				accountBalance = accountBalance-2000;
        				system("cls");
        				cout<<"============================Payment System menu================================="<<endl;
        				cout<<"\tYour Casas Bahia bill of $2000.00 has been paid."<<endl;
						cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
						cout<<"============================+++++++++++++++++++++++==========================="<<endl;
						cout<<"Press any key to Return to the Main Menu"<<endl;
						cin>>tecla;
						system("cls");
						a.show_menu2();
        			}
        		else
        			{
        				char tecla;
						System a;
       					system("cls");
       					cout<<"==============================Payment System menu==================================="<<endl;
       					cout<<"\tYour account Available Balanced Amount is $"<<accountBalance<<endl ;
       					cout<<"\tExiting Bill Payment System. Thank you!."<<endl;     
    					cout<<"============================+++++++++++++++++++++++==========================="<<endl;
       					cout<<"Press any key to Return to the Main Menu"<<endl;      
       					cin>>tecla;
       					a.show_menu2();
        			}
					system("PAUSE");
					break;
			
			case 2:
				system("cls");
				cout<<"Pay this month's Verdurao da Ceboala bill of $1500.00 now?"<<endl;
        		cout<<"\t\t\tPress 1 for Yes OR Press 0 for No"<<endl;
        		int d;		
				cin>>d;
				
				if(d==1)
					{char tecla;
					System a;
					accountBalance = startBalance-1500;
        			system("cls");
        			cout<<"==============================Payment System menu==================================="<<endl;
        			cout<<"\tYour Verdurao da Ceboala bill of $1500.00 has been paid."<<endl;
					cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
					cout<<"============================+++++++++++++++++++++++==========================="<<endl;
					cout<<"Press any key to Return to the Main Menu"<<endl;
					cin>>tecla;
					system("cls");
       					a.show_menu2();
        			}
        		else
        			{
        				char tecla;
					System a;
       				system("cls");
       				cout<<"==============================Payment System menu==================================="<<endl;
       				cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;
       				cout<<"\tExiting Bill Payment System. Thank you!."<<endl;     
     				cout<<"====================THANK YOU TO BELIEVE US============================";
       				cout<<"Press any key to Return to the Main Menu"<<endl;
					   cin>>tecla;
					   system("cls");
       					a.show_menu2();      
        			}
					system("PAUSE");
					break;
			
			case 3:
				system("cls");
				cout<<"==============================Payment System menu==================================="<<endl;
				cout<<"Pay this month's Ponto Frio bill of $3500.00 now?"<<endl;
        		cout<<"\t\t\tPress 1 for Yes OR Press 0 for No"<<endl;
        
				int f;		
				cin>>f;
				if(f==1)
					{char tecla;
					System a;
					accountBalance = startBalance-1500;
        			system("cls");
        			cout<<"===========================COK BILLS PAYMENT SYSTEM=========================="<<endl;
        			cout<<"\tPonto Frio bill of $3500.00 has been paid."<<endl;
					cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;
					cout<<"============================+++++++++++++++++++++++==========================="<<endl;
					cout<<"Press any key to Return to the Main Menu"<<endl;
					cin>>tecla;
					system("cls;");
       					a.show_menu2();
        			}
        		else
        			{
        				char tecla;
					System a;
       				system("cls");
       				cout<<"==========================COK BILLS PAYMENT SYSTEM============================"<<endl;
       				cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;
       				cout<<"\tExiting Bill Payment System. Thank you!."<<endl;     
     				cout<<"====================++THANK YOU FOR MAKING IT COK++============================"<<endl;
       				cout<<"Press any key to Return to the Main Menu"<<endl; 
					   cin>>tecla;
       					a.show_menu2();     
        			}
					system("PAUSE");
					break;
					
			case 0:
				break;
			default:
				char tecla;
				System a;
				cout<<"Please, enter the correct choice"<<endl;
				cin>>tecla;
				system("cls");
       					a.show_menu2();
				}
		}while(choice_t!=0);
}

void ATM::accountExit()
{
	system("cls");
	cout<<"===============================ATM ACCOUNT EXIT===================================="<<endl;
	cout<<"\t\tEXITING......... EXITING......... EXITING......... EXITING......... EXITING...."<<endl;
	cout<<"===========================THANK YOU FOR EVERYTHING================================"<<endl;
	system("pause");
}


