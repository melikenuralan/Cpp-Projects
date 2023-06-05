#include<iostream>
#include<cctype> //you need to include for isdigit() function !!
#include <string>
#include <cstdlib>

std::string str;
int space=0,vowel=0,consonant=0,size=0,number=0;

bool app_closed = false;

void get_from_user();
void choicehandle();
void analyze();
void get_from_user();
void reset_values();

void get_from_user()
{
	reset_values();
	std::cout<<"enter your password : "<<std::endl;
	std::getline(std::cin,str);
}

void analyze()
{
	for(int i=0;str[i]!='\0';i++)
	{
			if( str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' 
			|| str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
			{
						vowel++;
			}
			
			else if(str[i]==' ')
			{
						space++;
			}
			
			else if(std::isdigit(str[i])) // str[i]>=1 && str[i]<=9 don't use it it doesn't work here!!
			{
						number++;
			}
			
			else 
			{
						consonant++;
			}
				size++;
	}
}

void choicehandle()
{
	int x;
 
	std::cout<<"1.Size"<<std::endl;
	std::cout<<"2.Vowel"<<std::endl;
	std::cout<<"3.Space"<<std::endl;
	std::cout<<"4.Consonant"<<std::endl;
	std::cout<<"5.Number"<<std::endl;
	std::cout << "6.Quit" << std::endl;
	std::cout<<"enter your choice between (1-6): ";
	
	std::cin >> x;
	
	switch(x)
	{
		case 1:	analyze(); std::cout<<"size : "<<size<<std::endl;
			break;
		case 2: analyze(); std::cout<<"vowel : "<<vowel<<std::endl;
			break;
		case 3: analyze(); std::cout<<"space : "<<space<<std::endl;
			break;
		case 4: analyze(); std::cout<<"consonant : "<<consonant<<std::endl;
			break;
		case 5: analyze(); std::cout<<"number : "<<number<<std::endl;
			break;
		case 6:
            app_closed = true;
            break;
		default: std::cout<<"invalid operator !! "<<std::endl;
			break;
	}
	std::cout << "Press enter to continue...";
	std::cin.ignore();
	std::cin.get();

}

int main()
 {
 	while(!app_closed)
 	{	
 		get_from_user();
 		choicehandle();
	 }
	 
	 return 0;
 }

void reset_values()
{
	space = 0;
	vowel = 0;
	consonant = 0;
	size = 0;
	number = 0;
}
