#include<iostream>
#include<vector>
#include<fstream>
using namespace std;


struct Pharmacy{
    char id;
    string name;
    int quantity;
    int price;
};
Pharmacy phar;
vector<Pharmacy> medics;

void printMenu();
void choiceHandle();
void add();
void search();
void deleteMedic();
void displayAll();
void save(const vector<Pharmacy>& medics,const string& medical);
bool exitProgram = false;


void printMenu(){
    cout << "1.ADD MEDICINES : \n";
    cout << "2.SEARCH MEDICINES : \n";
    cout << "3.DELETE MEDICINES : \n";
    cout << "4.SHOW ALL MEDICINES : \n";
    cout << "5.SAVE MEDICINES : \n";
    cout << "6.<-EXIT : \n";
    cout << "Choose an option (1-6) : \n";
}

void choiceHandle(){
    while (!exitProgram) {
        int value;
        cin >> value;

        switch (value) {
            case 1:
                add();
               
                break;

            case 2: search();
                break;

            case 3: deleteMedic();
                break;

            case 4: displayAll();
                break;

            case 5: save(medics,"medical.txt");
                break;

            case 6:
                exitProgram = true;
                break;

            default:
                cout << "Invalid option. Please try again: ";
                break;
        }
    }
}
void add(){
	char choice;
    do {    
		system("cls");
        cout << "Id : ";
        cin >> phar.id;
        cout << "Name : ";
        cin >> phar.name;
        cout << "Quantity : ";
        cin >> phar.quantity;
        cout << "Price : ";
        cin >> phar.price;
        medics.push_back(phar);
        cout << " Saved Successfully \n";
        cout << "Press 'n' [NO] for exit or 'y' [YES] for continue : ";
		cin >> choice;
        getchar();
        system("cls");
    } while (choice == 'y' || choice == 'Y');
    if(choice=='n'){
    	system("cls");
    	printMenu();
    	choiceHandle();
	}
}
void search(){
	string n;
	system("cls");
	cout<<"S E A R C H \n";
	cout<<"\nEnter the name of the medicine : ";
	cin>>n;
	for(int i=0; i<medics.size(); i++){
		if(n==medics[i].name){
			cout<<i+1<<". Id : "<<medics[i].id<<endl;
			cout<<i+1<<". Name : "<<medics[i].name<<endl;
			cout<<i+1<<". Quantity : "<<medics[i].quantity<<endl;
			cout<<i+1<<". Price : "<<medics[i].price<<endl<<endl;
		}
	}
	getchar();
	cout<<"Press [ENTER] go back to main menu...";
	getchar();
	system("cls");
	printMenu();
	choiceHandle();
}
void deleteMedic(){
	
	string n;
	system("cls");
	cout<<"D E L E T E  M E D I C I N E\n"; 
	cout<<"\n\n\nenter the medicine that you want to delete\n";
	cin>>n;
	for(int i=0;i<medics.size();i++){
		if(n==medics[i].name){
			medics.erase(medics.begin()+i);
			cout<<" Deleted "<<medics[i].name<<endl<<endl;
		}
	}
	getchar();
	cout<<"Press [ENTER] go back to main menu...";
	getchar();
	system("cls");
	printMenu();
	choiceHandle();
}
void displayAll(){
system("cls");
	cout<<"D I S P L A Y  A L L\n\n";
	for(int i=0; i<medics.size() ;i++){
		cout << i+1 << ". Id : "<<medics[i].id<<endl;
		cout << ". Name : "<<medics[i].name<<endl;
		cout << ". Quantity : "<<medics[i].quantity<<endl;
		cout << ". Price : "<<medics[i].price<<endl;
		cout<<endl;
	}
	getchar();
	cout<<"Press [ENTER] go back to main menu...";
	getchar();
	system("cls");
	printMenu();
	choiceHandle();
}
void save(const vector<Pharmacy>& medics,const string& medical){
	ofstream out("medical.txt");
	if(!out){
		cerr<<"File not found : "<<medical<<endl;//cerr hata temsil eden bir nesnedir (standart error)
	}
	for(int i=0;i<medics.size();i++){
		out<<i+1<<" Id : "<<medics[i].id<<endl<<" Name : "<<medics[i].name<<endl
		<<" Quantity : "<<medics[i].quantity<<endl<<" Price"<<medics[i].price<<endl;
	}
	out.close();
	cout<<" Medicines saved "<<medical<<endl<<endl;//dosya adı
}


int main(){
    printMenu();
    choiceHandle();

    return 0;
}
