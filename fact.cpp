#include<iostream>

using namespace std;
int fact(int n){
	if(n==0){
		return 1;
		
	}
	
	return n*fact(n-1);
	
}
int main(){
	
		cout<<"<<<<< C++ PROGRAM FOR FACTORIAL >>>>>"<<endl;
		cout<<"---------------------------------------"<<endl;
	while(true){
		int choice;
		cout<<"[1] FACTORIAL [0] EXIT "; cin>>choice;
		
		if(choice==1){
			system("cls");
			int num;
			
			cout<<"Enter positive integer : "; cin>>num;
			
			if(num < 0 ){
				cout<<"Error!Enter positive integer "<<endl<<endl;
				
			}
			else{
				int x=fact(num);
				cout<<"\n\nFactorial of No : "<<num<<" = "<<x<<endl<<endl;
		}
		
		}
		
		else if(choice==0){
			exit(0);
		}
		
		
	}//while
}
