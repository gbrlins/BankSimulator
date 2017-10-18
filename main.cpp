#include <iostream>
#include <stdlib.h>
#include "ATM.h"
#include "Account.h"
#include "User.h"
#include "System.h"

int main ()
{
	system("Color 1a");
cout<<endl<<endl;	
cout<<"                 ##                   ##                          ##          "<<endl;    
cout<<"      ####        #           #        #       #####               #          "<<endl;    
cout<<"     #   #        #                    #        #   #              #          "<<endl;
cout<<"    #       ###   # ##  ## # ##   ##   #        #   # ###  ####    #  #       "<<endl;
cout<<"    #       #  #  ##  #  ##   #  #  #  #        ####  #  #  #  #   # #        "<<endl;
cout<<"    #   ###  ###  #   #  #    #  ####  #        #   #  ###  #  #   ##         "<<endl;
cout<<"     #   #  #  #  #   #  #    #  #     #        #   # #  #  #  #   # #        "<<endl;
cout<<"      ####  ####  ####  ###  ###  ### ###      #####  #### ### ## ##  #       "<<endl;
cout<<"\t\t\t\t\t\t\t\t # # # # #"<<endl<<endl;

	System();
	System u;
	u.hello();
	u.show_menu();
	
	system("pause");
	return 0;
}
