#include<iostream>
#include<vector>
using namespace std;
void mainMenu();
struct Emp{
	string name,position;
	int age;
	
};Emp emp;

vector <Emp> ve;

addEmp(){
	system("Color 06");
	
	char ch='y';
	do{
		
	cout<<char(175)<<" Name : "; cin>>emp.name;
	cout<<char(175)<<" Age : "; cin>>emp.age;
	cout<<char(175)<<" Position : "; cin>>emp.position;
	ve.push_back(emp);
	cout<<"Employee Added  "<<endl<<endl;
	cout << "press y for [YES] or n for [NO] : ";
	cin >>ch;
	cout << endl;
	cout <<". . . . . . . . . . . . . . . . . . . . . . \n";
	
	}while(ch!='n' && ch=='y');
	if(ch=='n'){
		system("cls");
	}
}

displayEmp(){
		system("Color 09");
	for(int i=0;i<ve.size();i++){
		cout << "Name : "<<ve[i].name<<endl;
		cout << "Age : "<<ve[i].age<<endl;
		cout << "Position : "<<ve[i].position<<endl;
		cout << endl;
		cout <<" . . . . . . . . . . . . . . . . . . .  . ";
		cout << endl;
	}
	cout <<"\n\n\npress [ENTER] to go back main menu"; 
	getchar();
	getchar();
	system("cls");
	mainMenu();
	
}
void mainMenu(){
		int val;
	
		system("Color 06");
	do{
	

		cout << "1. add employees : "<<endl;
		cout << "2. display employees : "<<endl;
		cout << "3. EXIT : "<<endl;
		cout << "Enter choice : "; cin >>val;
		
		switch(val){
			
			case 1: system("cls");
				addEmp();
					break;
			
			case 2: system("cls");
			 	displayEmp();
					break;
			case 3:
				exit(0);
					break;
		default: 
		system("cls");
		cout<<"\ninvalid input !!\n";
					break;
		}
		
	}while(val>=1 && val<=4);
	
}
int main(){

	mainMenu();
}
