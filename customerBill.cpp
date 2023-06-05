#include<iostream>
using namespace std;
class Customer{
	private:
		string name;
		string product;
		double total;
	public:
		Customer(string Name, string item){
			name = Name;
			product = item;
			total = 0.0;
			
		}
		add(double amount){
			total = total + amount;
			
		}
		display(){
			cout<<"Customer Name : "<<name<<endl;
			cout<<"Total amount : "<<total<<endl;
			
		}
};

int main(){
	
	string Name, item;
	double amount;
	cout<<"Enter customer name : "; cin>>Name;
	Customer customer(Name, item);
	char choice = 'y';
	while(choice == 'y'){
		cout<<"Enter Product Name : "; cin>>item;
	    cout<<"Enter Amount :     $"; cin>>amount;
	    customer.add(amount);
	    cout<<"For add more press y or n for exit : "; cin>>choice;
		
	}
	customer.display();
}
