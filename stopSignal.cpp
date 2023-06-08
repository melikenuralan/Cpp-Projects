#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	start:

	for(int i=6;i>=0;i--){
		
		system("cls");
		system("Color 04");
		cout<<"   . . . . . "<<endl;
		cout << "   | STOP! |"<<endl;
		cout<<"   . . . . . "<<endl;
		cout<<"       "<<i;
	
		if(i==1){
			system("Color 06");
			system("cls");
			cout<<" . . . . . . . "<<endl;
			cout<<" | Get Ready! |"<<endl;
			cout<<" . . . . . . . "<<endl;
			i--;
			
		}
		
		Sleep(1500);
	}
	
	for(int i=6;i>=0;i--){
		system("cls");
		system("Color 02");
		cout<<" . . . . "<<endl;
		cout<<" . Go! ."<<endl;
		cout<<" . . . . "<<endl;
		cout<<"        "<<i;
		
		Sleep(1500);
	}
	goto start;
}
