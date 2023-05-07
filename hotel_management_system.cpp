#include<iostream>

using namespace std;

int main()
{
	int quant; //quantity
	int choice;
	
	 //quantity of items
	int Qrooms = 0 , Qpasta = 0 , Qburger = 0 ,Qnoodles = 0 , Qshake = 0 , Qchicken = 0;
	//sold items
	int Srooms =0 , Spasta = 0 , Sburger = 0 , Snoodles = 0 , Sshake = 0 , Schicken = 0;

	//total price of items
	int Total_rooms = 0 , Total_pasta = 0 , Total_burger = 0 , Total_noodles = 0 , Total_shake = 0 , Total_chicken = 0 ;
	
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

//MENU

m: // label m
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n 1.Rooms :";
	cout<<"\n 2.Pasta : ";
	cout<<"\n 3.burger : ";
	cout<<"\n 4.noodles : ";
	cout<<"\n 5.shake : ";
	cout<<"\n 6.chicken-roll : ";
	cout<<"\n 7.information regarding sales and collection : ";
	cout<<"\n 8.Exit : ";
	
	cout<<"please enter your choice between (1-8)";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"\n\nEnter the numbers of rooms you want : ";
					cin>>quant;
						if(Qrooms-Srooms >= quant )
						{
							Srooms = Srooms + quant;
							Total_rooms = Total_rooms+quant*1200;
							cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you !!";	
							
						}
						else{
							cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
					
						}
							break;
		case 2: cout<<"\n\nEnter pasta quantity : ";
					cin>>quant;
						if(Qpasta-Spasta >= quant )
						{
							Spasta = Spasta + quant;
							Total_pasta = Total_pasta+quant*250;
							cout<<"\n\n\t\t"<<quant<<"pasta is the order !";		
							
						}
						else{
							cout<<"\n\t Only"<<Qpasta-Spasta<<"pasta stock ";
					
						}
							break;
						
						case 3: cout<<"\n\nEnter burger quantity : ";
					cin>>quant;
						if(Qburger-Sburger >= quant )
						{
							Sburger = Sburger + quant;
							Total_burger= Total_burger+quant*120;
							cout<<"\n\n\t\t"<<quant<<"burger is the order !!";	
							
						}
						else{
							cout<<"\n\t Only"<<Qburger-Sburger<<"burger stock";
					
						}
							break;
							
			case 4: cout<<"\n\nEnter noodles quantity : ";
					cin>>quant;
						if(Qnoodles-Snoodles >= quant )
						{
							Snoodles = Snoodles + quant;
							Total_noodles = Total_noodles+quant*250;
							cout<<"\n\n\t\t"<<quant<<"noodles is the order !";		
							
						}
						else{
							cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodles stock ";
					
						}
							break;
							
			case 5: cout<<"\n\nEnter shakes quantity : ";
					cin>>quant;
						if(Qshake-Sshake >= quant )
						{
							Sshake = Sshake + quant;
							Total_shake = Total_shake+quant*250;
							cout<<"\n\n\t\t"<<quant<<"shake is the order !";		
							
						}
						else{
							cout<<"\n\t Only"<<Qshake-Sshake<<"shakes stock ";
					
						}
							break;
									
				case 6: cout<<"\n\nEnter chicken quantity : ";
					cin>>quant;
						if(Qchicken-Schicken >= quant )
						{
							Schicken = Schicken + quant;
							Total_chicken = Total_chicken+quant*250;
							cout<<"\n\n\t\t"<<quant<<"chicken is the order !";		
							
						}
						else{
							cout<<"\n\t Only"<<Qchicken-Schicken<<"chicken stock ";
					
						}
							break;
							
				case 7: cout<<"\n\tDetails of sales and collection ";
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
						
						break;
						
						case 8:
							exit(0);
						
						default:
							cout<<"\n please select the numbers mention above : ";

				
	}
goto m;
	
}
