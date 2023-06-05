#include<iostream>
#include<fstream>
using namespace std;
void add(const char* filename);
void display(const char* filename);

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

int main() {
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

    return 0;
}
