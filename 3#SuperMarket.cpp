#include<iostream>
#include<fstream>


using namespace std;

class shopping{
	
	private:
		int pcode;
		float price;
		float dis;//discount
		string pname;
	public:
		void menu();
		void admin();
		void buyer();
		void add();
		void edit();
		void rem();//remove
		void list();
		void receipt();
		
};
void shopping::menu(){
	m:
	int choice;
	string email;
	string password;
	
	cout << "\t\t\t\t. . . . . . . . . . . . . . . . . .  .\n";
	cout << "\t\t\t\t.                                    .\n";
	cout << "\t\t\t\t.       SUPERMARKET MAIN MENU        .\n";
	cout << "\t\t\t\t.                                    .\n";
	cout << "\t\t\t\t. . . . . . . . . . . . . . . . . .  .\n";
	cout << "\n";
	cout << "\t\t\t\t"<<char(175) << " 1.Administrator\n";
	cout << "\t\t\t\t                           \n";
	cout << "\t\t\t\t"<<char(175) << " 2. Customer             \n";
	cout << "\t\t\t\t                           \n";
	cout << "\t\t\t\t"<<char(175) << " 3. Exit                 \n";
	cout << "\t\t\t\t                           \n\n\n";
	cout << "\t\t\t\tPlease Select option above (1-3) : ";
	cin >> choice;
	
	switch(choice){
		case 1:
			system("cls");
			cout << "\n\n\n\t\t\t\tL O G I N \n\n\n";
			cout << "\t\t\t\tEMAIL  \n\n\t\t\t\t";
			cout << char(175)<<" ";
			cin >> email;
			
			cout << "\n\n\t\t\t\tPASSWORD  \n\n\t\t\t\t";
			cout << char(175)<<" ";
			cin >> password;
			
			if(email == "melike@gmail.com" && password == "melike@123"){

				admin();
				
			} else {
				system("Color 04");
				cout << "invalid email / password ";
			}
			
		case 2: buyer();
		
				break;
			
		case 3: exit(0);
		
			break;		
		
		default:
			system("Color 04");
				 cout << "\n\nplease select from given options !!\n";
				 getchar();
				 cout << "\n\npress [ENTER] to try again";
				 getchar();
				 system("cls");
	}
	
	
	goto m;
}

void shopping::admin(){
	m:
	int choice;
	system("cls");
	system("Color 02");
	cout << "\n\n\n\t\t\t Administrator Menu";
	cout << "\n\t\t\t. . . . . . . . . . . . . . .";
	cout << "\n\t\t\t.    1) Add the product     .";
	cout << "\n\t\t\t. . . . . . . . . . . . . . .";
	cout << "\n\t\t\t.    2) Modify the product  .";
	cout << "\n\t\t\t. . . . . . . . . . . . . . .";
	cout << "\n\t\t\t.    3) Delete the product  .";
	cout << "\n\t\t\t. . . . . . . . . . . . . . .";
	cout << "\n\t\t\t.    4) Back to main menu   .";
	cout << "\n\t\t\t. . . . . . . . . . . . . . .";
	cout << "\n\n\t Please enter your choice : ";
	cin >>choice;
	
	switch(choice){
		
		case 1: add();
			break;
		case 2: edit();
			break;
		case 3: rem();
			break;
		case 4: menu();
			break;
		default: cout << "Invalid choice please reopen the program ";
			break;
	}
	goto m;
}

void shopping::buyer(){
	m:
	int choice;
	cout << "\n\t\t\t  Buyer \n";
	cout << "______________________\n";
	cout << "\t\t\t 1) Buy product \n";
	cout << "                      \n";
	cout << "\t\t\t 2) <-go back   \n";
	cout << "                      \n";
	cout <<"\t\t\t choose between (1-2) : ";
	
	cin >> choice;
	
	switch(choice){
		
		case 1:
			receipt();
			break;
		case 2:
			menu();
			break;
		default:
			cout << "invalid choice try again";
			break;
	}
	goto m;
}

void shopping::add(){
	m:
	fstream data;
	int c;
	int token = 0;
	float p;
	float d;
	string n;
	
	cout << "\n\n\t\t\t Add new product : ";

	cout << "\n\n\t Product code ";
	cin >> pcode;
	cout << "\n\n Name of the product : ";
	cin >> pname;
	cout << "\n\n\t Price of the product ";
	cin >> price;
	cout << "\n\n\t Discount on product ";
	cin >> dis;
	
	data.open("database.txt",ios::in);
	
	if(!data){
		
		data.open("database.txt",ios::app|ios::out);
		data << " " << pcode << " " << pname << " " << price << " "<< dis << "\n";
		data.close();
	} else {
	
	data >> c >> n >> p >> d;
	
	while(!data.eof()){ //eof end of file function each content is checked token variable will be incremented we are reading from file with data>>c>>n....
		
		if(c==pcode){
			token++;
		}
		data >> c >> n >> p >> d;
	}
	data.close();

		if(token==1)
					goto m;

		else{
			data.open("database.txt",ios::app|ios::out);
			data << " " << pcode << " " << pname << " " << price << " "<< dis << "\n";
			data.close();
	}
}
	cout << "\n\n\t\t Record inserted !!";
	
}

void shopping::edit(){
	fstream data,data1; // these are the objects of fstream class
	int pkey;
	int token = 0;
	int c;
	float p;
	float d;
	string n;
	
	cout << "\n\t\t\t Modify the record ";
	cout << "\n\t\t\t Product code : ";
	cin >> pkey;
	
	data.open("database.txt",ios::in);
	if(!data){
		cout << "\n\n File doesn't exist !!";
	}
	else{
		data1.open("database1.txt",ios::app|ios::out);
		
		data >> pcode >> pname >> price >> dis; //initialize file?
		while(!data.eof()){
			if(pkey==pcode){
				
				cout << "\n\t\t Product new code : ";
				cin >> c;
				cout << "\n\t\t Name of the product : ";
				cin >> n;
				cout << "\n\t\t Price : ";
				cin >> p;
				cout << "\n\t\t Discount : ";
				cin >> d;
				
				data1 << " " << c << " " << n << " " << p << " " <<d <<"\n";
				cout << "\n\n\t\tRecord edited !!";
				token++;
			}
			else{
				data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
				
			}
			
			data >> pcode >> pname >> price >> dis;
			
			
		}
			data.close();
			data1.close();
			remove("database.txt");
			rename("database1.txt","database.txt"); // old name | new name
			if(token==0){
				cout << "\n\n Record not found !!";
				
			}
	}
	
}

void shopping::rem(){
	
	fstream data,data1;
	int pkey;
	int token = 0;
	
	cout << "\n\n\t Delete product ";
	cout << "\n\n\t Product code : ";
	cin >> pkey;
	data.open("database.txt",ios::in);
	if(!data){
		
		cout << "File doesn't exist ";
		
	}
	else{
		data1.open("database1.txt",ios::app|ios::out);
			data >> pcode >> pname >> price >> dis;
		
			
			while(!data.eof()){
				if(pcode==pkey){
					
					cout << "\n\n\t Product deleted succesfully ";
					token++;
				} else {
					data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
				}
				
				data.close();
				data1.close();
				remove("database.txt");
				rename("database1.txt","database.txt");
				
				if(token==0){
					cout << "\n\n Record not found !!";
				}
			}
	}
}

void shopping::list(){
	fstream data;
	data.open("database.txt",ios::in);
	cout << " \n\n|____________________________________________\n";
	cout << "ProNo\tName\tPrice\n";
	cout << " \n\n|____________________________________________\n";
	data >> pcode >> pname >> price >> dis;
	while(!data.eof()){
		cout << pcode << "\t\t" << pname << "\t\t" <<price << "\n";
		data >> pcode >> pname >> price >> dis;
	}
	data.close();
}

void shopping::receipt(){
	m:
	fstream data;
	int arrc[100]; //arrc =  array of codes
	int arrq[100]; //array of quantity
	char choice;
	int c = 0;
	float amount = 0;
	float dis = 0;
	float total = 0;
	
	cout << "\n\n\t\t\t R E C E I P T ";
	data.open("database.txt",ios::in);
	if(!data){//checks if this database file exist
	cout << "\n\n Empty database ";
	
	}
	else{
		data.close();
		list();
		cout << "\n.__________________________________.\n";
		cout << "\n|                                  |\n";
		cout << "\n|     Please place the order       |\n";
		cout << "\n|                                  |\n";
		cout << "\n|__________________________________|\n";
		
		do{
			cout << "\n\nEnter product code : ";
			cin >> arrc[c];
			cout << "\n\nEnter the product quantity : ";
			cin >> arrq[c];
			
			for(int i=0;i<c;i++){
				
				if(arrc[c]==arrc[i]){
					cout << "\n\n Dublicate product code ! please try again!";
					goto m; //jump statement
				}
			}
			c++;
			cout << "\n\n Do you want to buy another product ? if [YES] press y else n [NO]";
			cin >> choice;
		}while(choice=='y');
		
		cout << "\n\n\t\t\t_____________________RECEIPT__________________\n";
		cout << "\nProduct No\n product Name\t product quantity\tprice\tAmount with discount\n";
		for(int i=0;i<c;i++){
			
			data.open("database.txt",ios::in);
			data >> pcode >> pname >> price >> dis; //kinda initialize
			while(!data.eof()){
				if(pcode==arrc[i]){
					amount=price*arrq[i];
					dis=amount-(amount*dis/100);
					total=total+dis;
					cout << "\n" << pcode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t" << dis;
					
				}
				data >> pcode >> pname >> price >> dis;
				
			}
		}
		
		data.close();
	}
	cout << "\n\n_____________________________________________\n";
	cout << "\n Total Amount : " << total;
}

int main(){
	system("Color 06");
	shopping s;
	s.menu();
	
}



