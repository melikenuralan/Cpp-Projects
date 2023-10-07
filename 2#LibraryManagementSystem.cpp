#include  <iostream>
#include  <windows.h>
#include  <fstream>
#include  <string.h>
#include  <sstream>
#include  <conio.h>
#include  <ctime>
using namespace std;

bool exitProgram = false;


void time();
void flow(const char* ch);
void gotoxy(int x,int y);

class design{
public:
	void appColor();
	void printMenu();
	void welcome_frame();
	void frame();
	void choicehandle();
	void oldman();
	
};


class Login{
public:
	void login();
	void registration();
	void forgot();
	void security();
	void admin();
	void admin_login();
		
};


class BookManage{
	public:
	
	void control_panel();
	void add_book();
	void check_book();
	void delete_book();
	
	
};


class Book_issue{
	public:
	void display_booklist();
	void display_menu();
	void search_book_by_name();
	void search_book_by_id();
	void search_book_by_author();
	void lend_book();
	void return_book();
	void suspend();
	
};


void time() {
 
    time_t currentTime = time(NULL);

    tm* localTime = localtime(&currentTime);

    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;
    int hour = localTime->tm_hour;
    int minute = localTime->tm_min;

    cout << day << "/" << month << "/" << year << endl;
    cout << hour << ":" << minute << endl;
}


void design::appColor()
{
    system("Color 06");
    cout<<endl;
  
    for(int i=1;i<31;i++)
    {
    	cout << char(223);
    
	}
    cout <<char(219)<<"       WELCOME TO THE LIBRARY      "<<char(219);

    for(int j=1;j<31;j++)
    {
    	cout << char(223);
    
	}
	cout<<endl;
	time();
	cout<<endl;
	cout<<endl;
}


void flow(const char* ch) {
    const char* str = ch;
    for (int i = 0; i < strlen(str); i++) {
        Sleep(20);
        cout << str[i];
    }
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void design::frame() {
    int i, j = 79;
	system("color 06");
    for (i = 0; i < 80, j >= 0; i++, j--) {
        gotoxy(i, 3);
        Sleep(1);
        cout << "|";
        
        gotoxy(i,13);
        cout<<char(223);
        
        gotoxy(56,23);cout<<"LOADING ...";
        
        gotoxy(i,14);
        cout<<char(223);
        
        gotoxy(i,15);
        cout<<char(223);
        
        gotoxy(j, 20);
        Sleep(1);
        cout << "|";
    }

    gotoxy(56, 2);
    system("cls");
}

void design::welcome_frame()
{
    system("color B5");
    int j, i, x, y;
    string word = "YOU";
    
    for (i = 0; i < 27; i++)
    {
        gotoxy(i, 13);
        cout << " ";
        cout << "STUDENT LIBRARY";
        Sleep(40);
    }
    for (j = 67; j > 44; j--)
    {
        gotoxy(j, 13);
        cout << "WELCO ES    ";
        cout << "            ";
        Sleep(40);
    }

    for (int c = 1; c <= 10; c++)
    {
        x = rand() % 70 + 1;
        y = rand() % 20 + 1;
        gotoxy(x, y);
        cout << "M";
        Sleep(180);
        gotoxy(x, y);
        cout << " ";
    }

    gotoxy(45, 13);
    cout << "WELCOMES    ";

    int startX = 54;       
    int startY = 10;         
    int endY = 13;          

     for (int y = startY; y <= endY; y++) {
        gotoxy(startX, y - 1);  
        cout << "     ";

        gotoxy(startX, y);     
        cout << word;

        Sleep(100);            

        if (y != endY) {
            gotoxy(startX, y);  
            cout << "     ";
        }
    }


    gotoxy(27, 13);
    cout << "STUDENT LIBRARY";
    gotoxy(45, 13);
    cout << "WELCOMES YOU";
    for (int j = 78; j >= 0; j--)
    {
        gotoxy(j, 20);
        cout << "+";
        gotoxy(j, 4);
        cout << "+";
        Sleep(30);
    }
    gotoxy(56, 23);
    cout << "Melikenur Alan ";
    Sleep(2000);
    system("cls");
}



void design::printMenu()
	{
	design d;
	d.frame();
	system("Color 06");
       for(int i=1;i<31;i++)
    {
    	cout << char(223);
	}
    cout <<'\n'<<char(175)<<"       REGISTIRATION        "<<char(174)<<'\n';

    for(int j=1;j<31;j++)
    {
    	cout << char(223);
	}
	
cout<<endl<<endl;
time();
cout << char(201);
for (int i = 0; i < 58; i++) {
    cout << char(205);
}
cout << char(187) << endl;

cout << char(186) << " 1.sign in :\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 2.sign up :\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 3.I forgot my password : \t\t\t\t   " << char(186) << '\n';
cout << char(186) << " 4.change password : \t\t\t\t\t   "<<char(186)<<'\n';
cout << char(186) << " 5.Admin\t\t\t\t\t\t   " << char(186) << '\n';
cout << char(186) << "<-" << "6.EXIT\t\t\t\t\t\t   " << char(186) << '\n';
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
gotoxy(26,14);

}


void design::choicehandle()
	{
	int c;
	
	Login l;
	
	cin>>c;
		switch(c)
		{
			case 1: l.login();
				break;
			case 2: l.registration();
				break;
			case 3: l.forgot();
				break;
			case 4: l.security();
				break;
			case 5: l.admin();
				break;
			case 6: system("cls"); 
			gotoxy(26,18); cout<<"Thank you !"<<endl;
			exit(0);
				break;

		default: cout<<"Please select from the options given above "<<endl;
		exit(0);
		break;
		}	
	}

void Login::login()
{
	int count=0;
	string userId,password,id,pass;
	system("cls");
	design d;
	Book_issue u;
	
	d.appColor();
	cout<<"\n\n\n\n";
	cout<<"L O G I N "<<endl;
	
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
	

		u.display_menu();
	}
	else
	{
		system("Color 04");
		cout<<endl<<"!!LOGIN ERROR!!"<<endl;
		cout<<"please check the username and password"<<endl;
					getchar();
                    
                    cout<<"\nPress [ENTER] to go back to the main menu...";
                    
    				getchar();
					system("cls");
					d.printMenu();
					d.choicehandle();
    			
	}

}


void Login::registration()
{
    string ruserId, rpassword;
    design d;
    bool userExists = false;
    system("cls");

    d.appColor();
    cout << "\n\n\n\n";
    cout << "S I G N   U P " << endl;

    cout << char(175) << "username : ";
    cin >> ruserId;

    cout << char(175) << "password : ";
    cin >> rpassword;

    
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
    	system("Color 04");
    	cout<<"\n!!!!USER CONFLICT!!!!";
        cout << "\nUser already exists, please choose a different username." << endl;
        getchar();
        cout<<"\nPress [ENTER] to go back to the main menu...";
        getchar();
        system("cls");
        d.printMenu();
        d.choicehandle();
      
    }

    if (rpassword.length() >= 8) {
    	
        ofstream f2("records.txt", ios::app);
        
        f2 << ruserId << ' ' << rpassword << endl;
        system("cls");
        
        cout << ruserId << " :  You signed up successfully !! " << endl;
        
       	 	 getchar(); 
       		 cout<<"\nPress [ENTER] to go back to the main menu...";
                    
      		  getchar(); 
      		  system("cls");
      		  d.printMenu();
			  d.choicehandle();
    }
    else {
    	system("Color 04");
        cout << "\nPassword must be at least 8 characters long !!" << endl;
       
        
        getchar();
        cout<<"\nPress [ENTER] to go back to the main menu...";
                    
        getchar(); 
        system("cls");
        d.printMenu();
		d.choicehandle();
    }
}


void Login::forgot() {
	design d;
    int option, count = 0;
    system("cls");

    d.appColor();

    cout << "\n\n\n\n";
    cout << "F O R G O T   P A S S W O R D " << endl;

    cout << "No worries !! \n" << endl;
    cout << "1. Search your PIN by user name" << endl;
    cout << "2. Go back to the main menu" << endl;
    cout << endl << endl << "Enter your choice (1-2): ";
    cin >> option;

    while (true) {
        switch (option) {
            case 1: {
                string suserId, sid, spass;
                cout << "Enter the username which you remembered: ";
                cin >> suserId;
                
                ifstream f2("records.txt");
                while (f2 >> sid >> spass) {
                    if (sid == suserId) {
                        count = 1;
                        break;
                    }
                }
                f2.close();
                if (count == 1) {
                	system("Color 02");
                    cout << "\nYour account is found.\n";
                    cout << "\n\nYour password is : " << spass << endl;
                    getchar();

                    cout << "\nPress [ENTER] to go back to the main menu...";
                    getchar();
                    
                    system("cls");
                    d.printMenu();
                    d.choicehandle();
                    return;
                } else {
                	system("Color 04");
                    cout << "\nSorry! Your account is not found.\n" << endl;
                
    
                    break;
                }
            }
            case 2: {
                system("cls");
                    d.printMenu();
                    d.choicehandle();
               
            }
            default: {
                cout << "\nWrong choice, please try again!\n" << endl;
                break;
            }
        }
        cout << endl << endl << "Enter your choice (1-2): ";
        cin >> option;
    }
}

void Login::security() {
	design d;
    string username, oldPassword, newPassword, newPasswordConfirm;
    bool passwordChanged = false;
    
    system("cls");
        
    d.appColor();
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    cout<<"S E C U R I T Y"<<endl<<endl;
    
    cout<<char(175)<< "Please enter your username: ";
    cin >> username;
    cout <<char(175)<< "Please enter your old password: ";
    cin >> oldPassword;
    
    
    ifstream recordsFile("records.txt");
    
    string line, storedUsername, storedPassword;
    
    while (getline(recordsFile, line)) {
    	
    	
        stringstream ss(line);
        
        
        ss >> storedUsername >> storedPassword;
        
        
        if (username == storedUsername && oldPassword == storedPassword) {
        	
            cout << "User found. \nPlease enter your new password: ";
            
            cin >> newPassword;
            
            cout << "Please enter your new password again to confirm: ";
            
            cin >> newPasswordConfirm;
            
            if (newPassword == newPasswordConfirm && newPassword.length()>=8) {
                
                ofstream newRecordsFile("new_records.txt");
                
                
                recordsFile.clear();
                
                recordsFile.seekg(0, ios::beg);
                
                
                while (getline(recordsFile, line)) {
                	
                    stringstream ss(line);
                    
                    ss >> storedUsername >> storedPassword;
                    
                    if (username != storedUsername) {
                    	
                        newRecordsFile << line << endl;
                    }
                }
                
                 
                newRecordsFile << username << " " << newPassword << endl;
                
                
                recordsFile.close();
                
                newRecordsFile.close();
                
               
                remove("records.txt");
                
                rename("new_records.txt", "records.txt");
                
                remove("new_record.txt");
                
                system("Color 02");
                
                cout << "Password changed successfully." << endl;
                
                passwordChanged = true;
                
	cout << "\nPress [ENTER] to go back to the main menu...";
	
    getchar();
    
    getchar();
    
    system("cls");
    
    d.printMenu();
    
	d.choicehandle();
	
                break;
    
            } else {
            	system("Color 04");
                cout << "New passwords don't match. Password not changed." << endl;
                break;
            }
        }
    }
    
    if (!passwordChanged) {
    	
    	system("Color 04");
    	
        cout << "\nInvalid username or old password. Password not changed." << endl;

    cout << "\nPress [ENTER] to go back to the main menu...";
    
    getchar();
    
    getchar();
    
    system("cls");
    
    d.printMenu();
	d.choicehandle();
	
    }
}

void Login::admin(){
	int x;
	design d;
	Login l;
	BookManage m;
	system("cls");
	d.frame();
	d.appColor();
	
	cout<<"\n\n\n\n1.Login : \n";
	cout<<"2.Back to main menu :\n";
	cout<<"please enter your choice between (1-2) : ";
	gotoxy(56,23);cout<<"A D M I N";
	gotoxy(0,24);
	for(int i=0;i<=110;i++){
	
	cout<<"_";
		
	}
	gotoxy(40,12);
	cin>>x;
	switch(x){
			case 1: l.admin_login();
					m.control_panel();
			break;
			
			case 2: 

    		system("cls");
   				 d.printMenu();
 			     d.choicehandle();
    break;
		default: cout<<"invalid option !! reopen the program "<<endl;
		break;
	}
}

void Login::admin_login()
{
    int flag=0;
    design d;
    string adminId, admin_password, id_admin, pass_admin;
    system("cls");

    BookManage m;
	
    d.appColor();
    cout << "\n\n\n\n";
    cout << "A D M I N   L O G I N \n\n" << endl;

    cout << char(175) << "username :";
    cin >> adminId;
    cout << char(175) << "PIN : ";

  
    char ch;
    while((ch = _getch()) != '\r') { 
        if(ch != '\b') {
            admin_password.push_back(ch);
            cout << '*';
        }
    }

    ifstream input_admin("admin.txt");

    while(input_admin >> id_admin >> pass_admin)
    {
        if(id_admin == adminId && pass_admin == admin_password)
        {
            flag = 1;
            system("cls");
        }
    }
    input_admin.close();

    if(flag == 1)
    {	
        cout << adminId << " :  you successfully logged in " << endl;
        m.control_panel();
    }
    else
    {
        cout << endl << "LOGIN ERROR" << endl;
        system("Color 04");
        cout << "\nplease check the username and password" << endl;
        getchar();
        cout << "\nPress [ENTER] to go back to the main menu...";
        getchar();
        system("cls");

        d.printMenu();
        d.choicehandle();
    }
}


void BookManage::control_panel(){
	int choice;
	char x;
	design d;
	BookManage m;
	
	d.frame();
	submenu:
	while(1){
		
	d.appColor();

	cout<<"\n\n\n\tB O O K   S H E L F "<<endl;
	cout<<"\n"<<"\n";
	cout<<"\t1.Add book"<<endl;
	cout<<"\t2.Check book"<<endl;
	cout<<"\t3.Delete book"<<endl;
	cout<<"\t4.<-Back"<<endl;
	cout<<"\t5.Exit"<<endl;

		
		cout<<"\tEnter your choice : ";
		int opt;
		cin>>choice;
		switch(choice)
		{
			case 1: 
		do{
				m.add_book(); 
				cout<<"Do you want to add more books (y/n)";
				cin>>x;
		}while(x=='y' || x=='Y');
			cout<<endl<<"\n\n\n\n1.<-back";
			cin>>opt;
					if(opt=1){
						system("cls");
						goto submenu;
					}
			break;
				
			case 2: m.check_book();
				break;
				
			case 3: m.delete_book();
				break;
			
			case 4:
                    cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
					d.printMenu();
					d.choicehandle();
					break;
			
			case 5:  system("cls"); 
			gotoxy(26,18); cout<<"Thank you !"<<endl;
			exit(0);
				break;

		default: cout<<"Please select from the options given above "<<endl;
		system("cls");
			
		}
	}
}


void BookManage::add_book() {
	design d;
    int status;
    string book_name, author_name, book_id;
    system("cls");
    fstream file;
	d.appColor();
    cout << "\n\n\n\nA D D  B O O K" << endl;
    cout << "Enter book ID: " << endl;
    cin >> book_id;
    cin.ignore();
    cout << "Enter book name: " << endl;
    getline(cin, book_name);
    cout << "Enter author name: " << endl;
    getline(cin, author_name);

    file.open("Book.txt", ios::out | ios::app);
    file << book_id << " " << book_name << " " << author_name << " "<<status<< endl;
    file.close();
}


void BookManage::check_book(){
	design d;
    system("cls");
	d.appColor();
    fstream file;
    string targetBookName;

    cout << "\n\n\n\nC H E C K   B O O K" << endl;
    cout << "Enter book name: ";
    cin.ignore(); 
    getline(cin, targetBookName);

    file.open("Book.txt", ios::in); 

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName;

        ss >> currentBookId >> currentBookName >> currentAuthorName;

        if (currentBookName == targetBookName) {
            found = true;
            cout << "\n\n\nBook found:" << endl;
            cout << "Book ID: " << currentBookId << endl;
            cout << "Book Name: " << currentBookName << endl;
            cout << "Author Name : " << currentAuthorName << endl;
          		   cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
            break;
        }
    }

    if (!found) {
        cout << "Book with name \"" << targetBookName << "\" not found." << endl;
        cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
    }

    file.close();
}
void BookManage::delete_book() {
	design d;
	
    system("cls");
	d.appColor();
    fstream file, temp;
    string bookIdToDelete;

    cout << "\n\n\n\nD E L E T E  B O O K\n\n" << endl;
    cout << "Enter book ID to delete: ";
    cin >> bookIdToDelete;

    file.open("Book.txt", ios::in); 
    temp.open("temp.txt", ios::out); 

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId;
        ss >> currentBookId;

        if (currentBookId == bookIdToDelete) {
            found = true;
        } else {
            temp << line << endl;
        }
        
    }

    file.close();
    temp.close();

    remove("Book.txt");
    rename("temp.txt", "Book.txt");

    if (found) {
        cout << "Book with ID " << bookIdToDelete << " has been deleted." << endl;
    } else {
        cout << "Book with ID " << bookIdToDelete << " not found." << endl;
    }
    getchar();
     cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
            
}

void Book_issue::display_menu(){
	int option;
	int choice;
	design d;
	Book_issue u;
	Login l;
	
	d.frame();
	d.appColor();
	u.suspend();
	
	while(1){
		
	cout<<"\n\n\n\tB O O K   S H E L F "<<endl;
	cout<<"\n"<<"\n";
	cout<<"\t1.Search book by name"<<endl;
	cout<<"\t2.Search book by id"<<endl;
	cout<<"\t3.Search book by author"<<endl;
	cout<<"\t4.Lend book"<<endl;
	cout<<"\t5.Return book"<<endl;
	cout<<"\t6.<-Back"<<endl;
	cout<<"\t7.Exit"<<endl;

		
		cout<<"\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: u.search_book_by_name();
			
			break;
				
			case 2: u.search_book_by_id();
	
				break;
				
			case 3: u.search_book_by_author();
	
				break;
			
			case 4: u.lend_book();
                   break;
			
			case 5: u.return_book();
				break;
			
			case 6: cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
					d.printMenu();
					d.choicehandle();
					break;
				
			case 7:		 system("cls"); 
			gotoxy(26,18); cout<<"Thank you !"<<endl;
						exit(0);
				break;

		default: cout<<"Please select from the options given above "<<endl;
		system("cls");
			
		}
	}
}

void Book_issue::display_booklist(){
	design d;
	system("cls");
    d.appColor();
    fstream file;
    
    file.open("Book.txt", ios::in);
    
    string line;
    bool found = false;
    
    cout << "\n\n\n\nB O O K   L I S T" << endl<<endl;
    
    while (getline(file, line)) {
    	
        stringstream ss(line);
        
        string currentBookId, currentBookName, currentAuthorName;
        
        ss >> currentBookId >> currentBookName >> currentAuthorName;
        
        cout << "\nBook ID: " << currentBookId << endl;
        cout << "Book Name: " << currentBookName << endl;
        cout << "Author Name: " << currentAuthorName << endl;
        
        found = true;
    }
    
    if (!found) {
    	
        cout << "\nNo books found." << endl;
    }
    
    cout << "\nPress [ENTER] to go back to the main menu...";
    getchar();
    getchar();
    system("cls");
    
    file.close();
	
}
void Book_issue::search_book_by_name() {
	design d;
	
    system("cls");
    d.appColor();
    fstream file;
    string targetBookName;

    cout << "\n\n\n\nS E A R C H   B O O K" << endl<<endl;
    cout << "Enter book name: ";
    cin.ignore(); 
    getline(cin, targetBookName);

    file.open("Book.txt", ios::in); 

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName;

        ss >> currentBookId >> currentBookName >> currentAuthorName;

        if (currentBookName == targetBookName) {
            found = true;
            cout << "\n\n\nBook found:" << endl;
            cout << "Book ID: " << currentBookId << endl;
            cout << "Book Name: " << currentBookName << endl;
            cout << "Author Name : " << currentAuthorName << endl;
            cout << "\nPress [ENTER] to go back to the main menu...";
            getchar();
            system("cls");
            break;
        }
    }

    if (!found) {
        cout << "No book found with the given name." << endl;
        cout << "\nPress [ENTER] to go back to the main menu...";
        getchar();
        system("cls");
    }

    file.close();
}

void Book_issue::search_book_by_id(){
	design d;
	
    system("cls");
    d.appColor();
    fstream file;
    string targetBookId;

    cout << "\n\n\n\nC H E C K   B O O K" << endl<<endl;
    cout << "Enter book ID: ";
    cin.ignore(); 
    getline(cin, targetBookId);

    file.open("Book.txt", ios::in); 

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName;
        ss >> currentBookId >> currentBookName >> currentAuthorName;

        if (currentBookId == targetBookId) {
            found = true;
            cout << "\n\n\nBook found:" << endl;
            cout << "Book ID: " << currentBookId << endl;
            cout << "Book Name: " << currentBookName << endl;
            cout << "Author Name : " << currentAuthorName << endl;
            cout << "\nPress [ENTER] to go back to the main menu...";
            getchar();
            system("cls");
            break;
        }
    }

    if (!found) {
        cout << "No book found with the given ID." << endl;
        cout << "\nPress [ENTER] to go back to the main menu...";
        getchar();
        system("cls");
    }

    file.close();
}


void Book_issue::search_book_by_author() {
	design d;
    system("cls");
    d.appColor();
    fstream file;
    string targetAuthorName;

    cout << "\n\n\n\nS E A R C H   B O O K" << endl<<endl;
    cout << "Enter author name: ";
    cin.ignore(); 
    getline(cin, targetAuthorName);

    file.open("Book.txt", ios::in); 

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName;

        ss >> currentBookId >> currentBookName >> currentAuthorName;

        if (currentAuthorName == targetAuthorName) {
            if (!found) {
                cout << "\n\n\nBooks found with the given author name:" << endl;
                found = true;
            }
            cout << "\nBook ID: " << currentBookId << endl;
            cout << "Book Name: " << currentBookName << endl;
            cout << "Author Name : " << currentAuthorName << endl;
        }
    }

    if (!found) {
        cout << "No book found with the given author name." << endl;
    }
	
    cout << "\nPress [ENTER] to go back to the main menu...";
    getchar();
    system("cls");

    file.close();
}


void Book_issue::lend_book() {
	design d;
	
    system("cls");
    d.appColor();
    fstream file;
    string book_id, targetBookId, userName;
    bool found = false;

    cout << "L E N D  B O O K" << endl<<endl;
    cout << "Enter book ID: ";
    cin >> targetBookId;

  
    cout << "Enter user name: ";
    cin >> userName;

    file.open("Book.txt", ios::in); 
    ofstream tempFile("Temp.txt", ios::out);

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName, currentStatus, currentUser;

        ss >> currentBookId >> currentBookName >> currentAuthorName >> currentStatus >> currentUser;

        if (currentBookId == targetBookId) {
            found = true;
            if (currentStatus == "0") {
                currentStatus = "1";
                currentUser = userName; 
                cout << "Book lent successfully." << endl;
            } else {
                cout << "The book is currently unavailable." << endl;
            }
        }
        tempFile << currentBookId << ' ' << currentBookName << ' ' << currentAuthorName << ' ' << currentStatus << ' ' << currentUser << '\n';
    }

    file.close();
    tempFile.close();

    remove("Book.txt");
    rename("Temp.txt", "Book.txt");

    if (!found) {
        cout << "No book found with the given book ID." << endl;
    }

    cout << "\nPress [ENTER] to go back to the main menu...";
    cin.ignore();
    getchar();
    system("cls");
   
}
void Book_issue::return_book() {
	design d;
    system("cls");
	d.appColor();
    fstream file;
    string book_id, targetBookId;
    bool found = false;

    cout << "R E T U R N  B O O K" << endl<<endl;
    cout << "Enter book ID: ";
    cin >> targetBookId;

    file.open("Book.txt", ios::in); 
    ofstream tempFile("Temp.txt", ios::out); 

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string currentBookId, currentBookName, currentAuthorName, currentStatus;

        ss >> currentBookId >> currentBookName >> currentAuthorName >>currentStatus;

        if (currentBookId == targetBookId) {
            found = true;
            if (currentStatus == "1") {
                currentStatus = "0";
                cout << "Book returned successfully." << endl;
            } else {
                cout << "The book is already available." << endl;
            }
        }

        tempFile << currentBookId << " " << currentBookName << " " << currentAuthorName << " "
         << currentStatus << endl;
    }

    if (!found) {
        cout << "Book with ID \"" << targetBookId << "\" not found." << endl;
    }

    file.close();
    tempFile.close();

    remove("Book.txt");
    rename("Temp.txt", "Book.txt");
    				getchar();
    cout<<"\nPress [ENTER] to go back to the main menu...";
    				getchar();
					system("cls");
				
}

void Book_issue::suspend(){
	design d;
	system("COLOR 02");
    for (int i = 4; i < 29; i++) {
        gotoxy(1, i);
        cout << "$";
        gotoxy(97, i);
        cout << "$";
    }
gotoxy(3, 5);
    flow("	L I B R A R Y   C O M M A N D S");
gotoxy(3, 8);
    flow("	please enter your book name with english characters also");
gotoxy(3, 13);
    flow("	Please add underscore between words");
gotoxy(3, 18);
    flow("	keep in mind that you return the borrowed book within 30 days");
gotoxy(3, 23);
    flow("	otherwise you'll get suspended for 2 weeks");
gotoxy(3, 28);
    cout << " 		 		For more information, contact: ADMIN";
gotoxy(3, 26);
    cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
Sleep(1500);
    system("cls");
}


int main() {
    design d;
    Login l; 
    time();
    Book_issue u;
	d.welcome_frame();
    d.appColor();

system("cls");

 while(!exitProgram) {
		
        d.printMenu();
	    d.choicehandle();
}

    return 0;
}
