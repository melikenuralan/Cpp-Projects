#include<iostream>

using namespace std;
bool exitProgram = false;

	int quant; //quantity
	int choice=0;
	
	void appColor();
	
	void admin_login();
	void user_login();
	void login();
	
	
	void room();
	void pasta();
	void burger();
	void noodle();
	void shake();
	void chicken();
	void info();
	void exitProgramFunc();
	

	 //quantity of items
	int Qrooms = 0 , Qpasta = 0 , Qburger = 0 ,Qnoodles = 0 , Qshake = 0 , Qchicken = 0;
	//sold items
	int Srooms =0 , Spasta = 0 , Sburger = 0 , Snoodles = 0 , Sshake = 0 , Schicken = 0;

	//total price of items
	int Total_rooms = 0 , Total_pasta = 0 , Total_burger = 0 , Total_noodles = 0 , Total_shake = 0 , Total_chicken = 0 ;
	
	void appColor()
{
    system("Color 06");
    cout<<endl;
    for(int i=1;i<31;i++)
    {
    	cout << char(223);
	}
    cout <<char(219)<<"       WELCOME TO THE HOTEL         "<<char(219);

    for(int j=1;j<31;j++)
    {
    	cout << char(223);
	}
}
	
	void login(){
		
		int x;
	appColor();
	cout<<endl<<endl;
    cout << "Please choose an option:\n";
    cout << "1. Admin Login \n";
    cout << "2. User Login\n";
    cin >> x;

  	  switch (x) {
   	     case 1:
    	        admin_login();
   	         break;
    	 case 2:
        	    user_login();
            	break;
        	default:
            	cout << "Invalid option \n";
            	break;
	}
	  getchar();
        cout<<"\n\nPress [ENTER] to go back to the main menu...";          
        getchar();
        system("cls");
		
	}
	
	void admin_login(){
	
	cout<<"\n Quantity of items we have";
	cout<<"\n\n Rooms avaible : ";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta : ";
	cin>>Qpasta;
	cout<<"\n Quantity of burger : ";
	cin>>Qburger;
	cout<<"\n Quantity of noodles : ";
	cin>>Qnoodles;
	cout<<"\n Quantity of shake : ";
	cin>>Qshake;
	cout<<"\n Quantity of chicken-roll : ";
	cin>>Qchicken;
	
		
	}
	
	
	void user_login(){
		
	system("cls");
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n 1.Rooms :";
	cout<<"\n 2.Pasta : ";
	cout<<"\n 3.burger : ";
	cout<<"\n 4.noodles : ";
	cout<<"\n 5.shake : ";
	cout<<"\n 6.chicken-roll : ";
	cout<<"\n 7.information regarding sales and collection : ";
	cout<<"\n 8.Exit : ";
	
	cout<<"please enter your choice between (1-8) : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:  room();
							break;
		case 2:  pasta();
							break;
						
		case 3:  burger();
							break;
							
		case 4: noodle();
							break;
							
		case 5: shake();
							break;
									
		case 6:  chicken();
							break;
							
		case 7:  info();
						
						break;
						
		case 8: exitProgramFunc();
						break;
							
						
	default:
				cout<<"\n please select the numbers mention above : ";

				
	}

	
		
	}
	
	int main()
	{
		void appColor();
		 while(!exitProgram) {
			 login();
}


		
		return 0;
	}
	
	void room(){
		cout<<"\n\nEnter the numbers of rooms you want : ";
					cin>>quant;
						if(Qrooms-Srooms >= quant )
						{
							Srooms = Srooms + quant;
							Total_rooms = Total_rooms+quant*1200;
							cout<<"\n\n\t"<<quant<<" room/rooms have been alloted to you !!";	
							
						}
						else{
							cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
					
						}
		
	}
	void pasta(){
		cout<<"\n\nEnter pasta quantity : ";
					cin>>quant;
						if(Qpasta-Spasta >= quant )
						{
							Spasta = Spasta + quant;
							Total_pasta = Total_pasta+quant*250;
							cout<<"\n\n\t"<<quant<<" pasta is the order !";		
							
						}
						else{
							cout<<"\n\t Only "<<Qpasta-Spasta<<" pasta stock ";
					
						}
		
	}
	void burger(){
		cout<<"\n\nEnter burger quantity : ";
					cin>>quant;
						if(Qburger-Sburger >= quant )
						{
							Sburger = Sburger + quant;
							Total_burger= Total_burger+quant*120;
							cout<<"\n\n\t"<<quant<<" burger is the order !!";	
							
						}
						else{
							cout<<"\n\t Only "<<Qburger-Sburger<<" burger stock";
					
						}
		
	}
	void noodle(){
		cout<<"\n\nEnter noodles quantity : ";
					cin>>quant;
						if(Qnoodles-Snoodles >= quant )
						{
							Snoodles = Snoodles + quant;
							Total_noodles = Total_noodles+quant*250;
							cout<<"\n\n\t"<<quant<<" noodles is the order !";		
							
						}
						else{
							cout<<"\n\t Only "<<Qnoodles-Snoodles<<" noodles stock ";
					
						}
		
	}
	void shake(){
		cout<<"\n\nEnter shakes quantity : ";
					cin>>quant;
						if(Qshake-Sshake >= quant )
						{
							Sshake = Sshake + quant;
							Total_shake = Total_shake+quant*250;
							cout<<"\n\n\t"<<quant<<" shake is the order !";		
							
						}
						else{
							cout<<"\n\t Only "<<Qshake-Sshake<<" shakes stock ";
					
						}
		
	}
	void chicken(){
		cout<<"\n\nEnter chicken quantity : ";
					cin>>quant;
						if(Qchicken-Schicken >= quant )
						{
							Schicken = Schicken + quant;
							Total_chicken = Total_chicken+quant*250;
							cout<<"\n\n\t"<<quant<<" chicken is the order !";		
							
						}
						else{
							cout<<"\n\t Only "<<Qchicken-Schicken<<" chicken stock ";
					
						}
		
	}
	void info(){
		cout<<"\n\tDetails of sales and collection ";
						cout<<"\n\nNumber of rooms we had :  "<<Qrooms;
						cout<<"\n\nNumber of rooms we gave for rent : "<<Srooms;
						cout<<"\n\nRemaining rooms : "<<Qrooms-Srooms;
						cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;
						
						cout<<"\n\nNumber of pasta we had :  "<<Qpasta;
						cout<<"\n\nNumber of pasta we gave for rent : "<<Spasta;
						cout<<"\n\nRemaining pasta : "<<Qpasta-Spasta;
						cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;
						
						cout << "\n\nNumber of burgers we had: " << Qburger;
						cout << "\n\nNumber of burgers we gave for rent: " << Sburger;
						cout << "\n\nRemaining burgers: " << Qburger - Sburger;
						cout << "\n\nTotal burger collection for the day: " << Total_burger;

								
						cout << "\n\nNumber of noodles we had: " << Qnoodles;
						cout << "\n\nNumber of noodles we gave for rent: " << Snoodles;
						cout << "\n\nRemaining noodles: " << Qnoodles - Snoodles;
						cout << "\n\nTotal noodle collection for the day: " << Total_noodles;
						
						cout << "\n\nNumber of shakes we had: " << Qshake;
						cout << "\n\nNumber of shakes we gave for rent: " << Sshake;
						cout << "\n\nRemaining shakes: " << Qshake - Sshake;
						cout << "\n\nTotal shake collection for the day: " << Total_shake;
						
						cout << "\n\nNumber of chickens we had: " << Qchicken;
						cout << "\n\nNumber of chickens we gave for rent: " << Schicken;
						cout << "\n\nRemaining chickens: " << Qchicken - Schicken;
						cout << "\n\nTotal chicken collection for the day: " << Total_chicken;
						
		cout<<"\n\n\n Total collection for the day : "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
		
	}
void exitProgramFunc(){
		
		exit(0);
		
	}
	
	
	
