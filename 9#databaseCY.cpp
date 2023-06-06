#include  <iostream>
#include  <vector>
#include  <windows.h>
#include  <fstream>
#include  <string.h>
#include  <sstream>
#include  <conio.h>
#include <ctime>
using namespace std;
void gotoxy(int x,int y);
void frame();
void flowBinary();
void add(const char* filename);
void display(const char* filename);
void choiceHandle();

class User {
private:
    string name, password;

public:
    User(string n, string pw) {
        name = n;
        password = pw;
    }

    string getName() {
        return name;
    }

    string getPw() {
        return password;
    }
};

class Cyber {
private:
    vector<User> ve;

public:
    void add(User user) {
        ve.push_back(user);
    }

    void authentication() {
        string userN, userPW;
        cout << "Enter User Name: ";
        cin >> userN;
        cout << "Enter Password: ";
        cin >> userPW;

        bool isAuthenticated = false;

        for (int i = 0; i < ve.size(); i++) {
            if (userN == ve[i].getName() && userPW == ve[i].getPw()) {
                isAuthenticated = true;
                break;
            }
        }

        if (isAuthenticated) {
            system("cls");
            frame();
            system("Color 02");
            cout << "Authentication Successful" << endl << endl;
            getchar();
            cout << "press [ENTER] to continue...";
            getchar();
            flowBinary();
            system("cls");
            system("Color 74");
            choiceHandle();
            
        } else {
            system("cls");
            frame();
            system("Color 04");
            
            cout << "Authentication Failed! Enter a valid Username or Password" << endl << endl;
            getchar();
            getchar();
            cout << "press [ENTER] to go back to the main menu...";
        }
    }
};
void frame() {
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



void flowBinary() {
    system("COLOR 02");
    for (int j = 1; j <= 24; j += 4) { 
        for (int i = 1; i <= 80; i += 8) {
            for (int k = 0; k < 8; k++) {
                gotoxy(i, j + k);
                cout << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2) << " " << (rand() % 2);
            }
            Sleep(10);
        }
    }
}


void add(const char* filename) {
    string name, phone, address;
    cout << "Name: ";
    cin >> name;
    cout << "PhoneNumber: ";
    cin >> phone;
    cout << "Address: ";
    cin >> address;

    ofstream out(filename, ios::app);
    if (out.is_open()) {
        out << name << " , " << phone << " ," << address << endl << endl;
        out.close();
        cout << "Added Successfully" << endl << endl;
    } else {
        cout << "File not found" << endl;
    }
}

void display(const char* filename) {
    ifstream in(filename);
    if (in.is_open()) {
        string line;
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    } else {
        cout << "Error" << endl;
    }
}

void choiceHandle(){
	int choice;
    cout << "*******D A T A B A S E   M A N A G E M E N T*******" << endl << endl;
    while (true) {
        cout << "1. Add" << endl;
        cout << "2. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            add("data.txt");
        } else if (choice == 2) { system("cls");
            display("data.txt");
        } else if (choice == 0) {
            exit(0);
        } else { system("cls");
            cout << "Invalid input!!!" << endl << endl;
        }
    }
}


void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



int main() {
	system("Color 0B");
	srand(time(0));
    Cyber cyber;

    cyber.add(User("melike", "melike123"));
    cyber.add(User("yigit", "yigit123"));
    cyber.add(User("xyz", "xyz123"));

    cout << "Enter username and password" << endl;
    cout << "                            " << endl << endl;
    cyber.authentication();


    return 0;
}
