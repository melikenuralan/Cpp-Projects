#include  <iostream>
#include  <windows.h>
#include  <fstream>//reading and writing files
#include  <string.h>
#include  <sstream>
using namespace std;

bool exitProgram = false;

void printMenu();//printing template of registiration page
void choicehandle();

void login();
void registration();
void forgot();
void security();

void appColor()//this function is basic template of library
{
    system("Color 0C");
    cout<<endl;
    for(int i=1;i<31;i++)
    {
    	cout << char(223);o
	}
    cout <<char(219)<<"       WELCOME TO THE LIBRARY      "<<char(219);

    for(int j=1;j<31;j++)
    {
    	cout << char(223);
	}
}

class Language {
private:
    int language;
public:
    Language() {language = 1;}
    Language(int l) {language = l;}
    Language(Language &r) {language = r.language;}
    int getLanguage() {return language;}
    void setLanguage(int l) {language = l;}

    int choiceLanguage() {
        int m;
        cout << '\n' << '\n' << '\n' <<'\n'<<'\n'<<"MENU";
        cout << '\n' << '\n' <<'\n'<< "1.TURKISH" << '\n' << '\n' << '\n' <<'\n'<< "2-ENGLISH" << '\n';
        cout << '\n' << '\n' << "Enter your choice (1-2): ";
        cin >> m;
        switch (m) {
        case 1: {
            return 1;
            break;
        }
        case 2: {
            return 2;
            break;
        }
        default:
            cout << "Please reopen the program." << endl;
            exit(0);
        }

    }

};


int main() {
	
    appColor();

    Language l1;

    l1.setLanguage(l1.choiceLanguage());
    cout << "Selected language: " << l1.getLanguage() << endl;

system("cls");

 while(!exitProgram) {
        printMenu();
	    choicehandle();
}

    return 0;
}


//printing Registiration page to the screen
	void printMenu()
	{
       for(int i=1;i<31;i++)
    {
    	cout << char(223);
	}
    cout <<'\n'<<char(178)<<"       REGISTIRATION        "<<char(178)<<'\n';

    for(int j=1;j<31;j++)
    {
    	cout << char(223);
	}
	
cout<<endl<<endl;

cout << char(201);
for (int i = 0; i < 58; i++) {
    cout << char(205);
}
cout << char(187) << endl;

cout << char(186) << " 1.sign in :\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 2.sign up :\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 3.I forgot my password : \t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 4.change password : \t\t\t\t\t   "<<char(186)<<'\n';
cout << char(186) << "<-" << "5.EXIT\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(204);
for (int i = 0; i < 58; i++) {
    cout << char(205);
}
cout << char(185) << endl;

cout << char(186) << "Enter your choice (1-5):\t\t\t\t   "<< char(186) << endl;

cout << char(200);

for (int i = 0; i < 58; i++) {
    cout << char(205);
}

cout << char(188) << endl;

}

//when the user decide option !!
	void choicehandle()
	{
	int c;
	cin>>c;
		switch(c)
		{
			case 1: login();
				break;
			case 2: registration();
				break;
			case 3: forgot();
				break;
			case 4: security();
				break;
			case 5: cout<<"Thank you !"<<endl;
			exit(0);//exit the program
				break;

		default: cout<<"Please select from the options given above "<<endl;
		system("cls");
		}	
	}
	
void login()
{
	int count=0;
	string userId,password,id,pass;
	system("cls");
	
	appColor();
	cout<<"\n\n\n\n";
	cout<<"LOGIN"<<endl;
	
	cout<<char(175)<<"username :";
	cin>>userId;
	cout<<char(175)<<"password : ";
	cin>>password;

	ifstream input("records.txt");

	while(input>>id>>pass)
	{
		if(id==userId && pass==password)
		{
			count=1;
			system("cls");
		}
	}
		input.close();
if(count==1)
{
	cout<<userId<<" :  you successfully logged in "<<endl;
	// NOTE myself : nereye gideceğini seçeceğim
	}
	else
	{
		cout<<endl<<"LOGIN ERROR"<<endl;
		cout<<"please check the username and password"<<endl;
					getchar();
                    
                    cout<<"\nPress [ENTER] to go back to the main menu...";
                    
    				getchar();
					system("cls");
    			
	}

}

void registration()
{
    string ruserId, rpassword;
    bool userExists = false;
    system("cls");

    appColor();
    cout << "\n\n\n\n";
    cout << "SIGN UP" << endl;

    cout << char(175) << "username : ";
    cin >> ruserId;

    cout << char(175) << "password : ";
    cin >> rpassword;

    // Check if user already exists
    ifstream f1("records.txt");
    string line;
    while (getline(f1, line)) {
        istringstream iss(line);
        string userIdFromFile;
        iss >> userIdFromFile;
        if (userIdFromFile == ruserId) {
            userExists = true;
            break;
        }
    }

    if (userExists) {
        cout << "User already exists, please choose a different username." << endl;
        getchar();
        cout<<"\nPress [ENTER] to go back to the main menu...";
        getchar();
        system("cls");
        return;
    }

    if (rpassword.length() >= 8) {
        ofstream f2("records.txt", ios::app);
        f2 << ruserId << ' ' << rpassword << endl;
        system("cls");
        cout << ruserId << " :  You signed up successfully !! " << endl;
        
        getchar(); // wait for user to press Enter
        cout<<"\nPress [ENTER] to go back to the main menu...";
                    
        getchar(); // wait for user to press Enter
        system("cls");
    }
    else {
        cout << "Password must be at least 8 characters long !!" << endl;
        // You can choose to ask the user to enter a new password or exit the registration process here
        
        getchar();
        cout<<"\nPress [ENTER] to go back to the main menu...";
                    
        getchar(); // wait for user to press Enter
        system("cls");
    }
}


void forgot() {
    int option,count=0;
        system("cls");
        
        appColor();
	cout<<"\n\n\n\n";
	cout<<"FORGOT PASSWORD"<<endl;
	
        cout<<"No worries !! \n"<<endl;
        cout<<"1. Search your id by user name"<<endl;
        cout<<"2. Go back to the main menu"<<endl;
        cout << endl << endl << "Enter your choice (1-2): ";
        cin>>option;
        switch(option) {
            case 1: {
                string suserId,sid,spass;
                cout<<"Enter the username which you remembered: ";
                cin>>suserId;
                ifstream f2("records.txt");
                while(f2>>sid>>spass) {
                    if(sid==suserId) {
                        count=1;
                    }
                }
                f2.close();
                if(count==1) {
                    cout<<"\nYour account is found.\n";
                    cout<<"\n\nYour password is : "<<spass<<endl;
    				getchar();
                    
                    cout<<"\nPress [ENTER] to go back to the main menu...";
                    
    				getchar();
					system("cls");
    			
    				
                }
                else {
                    cout<<"\nSorry! Your account is not found.\n"<<endl;
                      system("cls");
                }
                break;
            }
    while(true) {
            case 2: {
            	
            	
                system("cls");
                return;//statement allows the user to exit the function and return to the main menu.
            }
            default: {
                cout<<"\nWrong choice, please try again!\n"<<endl;
                break;
            }
        }
    }
}

void security() {
    string username, oldPassword, newPassword, newPasswordConfirm;
    bool passwordChanged = false;
    
    system("cls");
        
    appColor();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<char(175)<< "Please enter your username: ";
    cin >> username;
    cout <<char(175)<< "Please enter your old password: ";
    cin >> oldPassword;
    
    // Search for the user in the records file
    ifstream recordsFile("records.txt");
    string line, storedUsername, storedPassword;
    while (getline(recordsFile, line)) {
        stringstream ss(line);
        ss >> storedUsername >> storedPassword;
        if (username == storedUsername && oldPassword == storedPassword) {
            // User found, ask for new password
            cout << "User found. \nPlease enter your new password: ";
            cin >> newPassword;
            cout << "Please enter your new password again to confirm: ";
            cin >> newPasswordConfirm;
            
            // Check if the new passwords match
            if (newPassword == newPasswordConfirm) {
                // Open a new file for writing
                ofstream newRecordsFile("new_records.txt");
                
                // Go back to the start of the records file
                recordsFile.clear();
                recordsFile.seekg(0, ios::beg);
                
                // Copy over all the records except for the one being updated
                while (getline(recordsFile, line)) {
                    stringstream ss(line);
                    ss >> storedUsername >> storedPassword;
                    if (username != storedUsername) {
                        newRecordsFile << line << endl;
                    }
                }
                
                // Add the updated record
                newRecordsFile << username << " " << newPassword << endl;
                
                // Close the files
                recordsFile.close();
                newRecordsFile.close();
                
                // Delete the old records file and rename the new one
                remove("records.txt");
                rename("new_records.txt", "records.txt");
                
                cout << "Password changed successfully." << endl;
                passwordChanged = true;
	cout << "\nPress [ENTER] to go back to the main menu...";
    getchar();
    getchar();
    system("cls");
                break;
    
            } else {
                cout << "New passwords don't match. Password not changed." << endl;
                break;
            }
        }
    }
    
    if (!passwordChanged) {
        cout << "Invalid username or old password. Password not changed." << endl;

    cout << "\nPress [ENTER] to go back to the main menu...";
    getchar();
    getchar();
    system("cls");
    }
}
