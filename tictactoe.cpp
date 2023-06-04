#include <iostream>
#include <windows.h>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'x';

bool tie = false;
void appColor();
string n1 = "";
string n2 = "";
void setup();
bool value();
bool gameOver();
void frame();
void gotoxy(int x, int y);

void setup()
{
    system("cls");
    cout << "     |     |     \n";
    cout << "   " << space[0][0] << " |   " << space[0][1] << " |  " << space[0][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |      \n";
    cout << "   " << space[1][0] << " |   " << space[1][1] << " |  " << space[1][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |      \n";
    cout << "   " << space[2][0] << " |   " << space[2][1] << " |  " << space[2][2] << "  \n";
    cout << "     |     |      \n";
}
bool value(){
	int digit;
	
	if(token=='x'){
		
		cout<<n1<<"\nplease enter : ";
		cin>>digit;
	}
	
	if(token=='0'){
		
		cout<<n2<<" please enter : ";
		cin>>digit;
	}	
	
	if(digit==1){
		
		row=0;
		column=0;
	}
	if(digit==2){
		
		row=0;
		column=1;
	}if(digit==3){
		
		row=0;
		column=2;
	}
	if(digit==4){
		
		row=1;
		column=0;
	}
	if(digit==5){
		
		row=1;
		column=1;
	}
	if(digit==6){
		
		row=1;
		column=2;
	}
	if(digit==7){
		
		row=2;
		column=0;
	}
	if(digit==8){
		
		row=2;
		column=1;
	}
	if(digit==9){
		
		row=2;
		column=2;
	}
	else if(digit<1 || digit>9){
		
		cout<<"ınvalid!!!"<<endl;
	}
	
	if(token=='x' && space[row][column] !='x' && space[row][column] !='0'){
	
		space[row][column]='x';
		token='0';
	}
	
	
else if(token=='0' && space[row][column] !='x' && space[row][column] !='0')
{
space[row][column]='0';
token='x';		
}
else{
	cout<<"there is no empty space !!"<<endl;
	value();
}
setup();


}

bool gameOver()
{
    for (int i = 0; i < 3; i++)
    {
        if ((space[i][0] == space[i][1] && space[i][0] == space[i][2]) || (space[0][i] == space[1][i] && space[0][i] == space[2][i]))
            return true;
    }

    if ((space[0][0] == space[1][1] && space[1][1] == space[2][2]) || (space[0][2] == space[1][1] && space[1][1] == space[2][0]))
    {
        return true;
    }

  
    bool allFilled = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != '0')
            {
                allFilled = false;
                break;
            }
        }
        if (!allFilled) {
            break;
        }
    }

    if (allFilled)
    {
        tie = true;
        return true;
    }

    return false;
}

int main()
{
	frame();
    appColor();
    cout << "melikenur Alan 220403799" << endl<< endl;
    cout << "Enter the name of the first player: ";
    getline(cin, n1);
    cout << "Enter the name of the second player: ";
    getline(cin, n2);
    cout << endl;
    cout << n1 << " [X](Player 1)" << endl;
    cout << n2 << " [0](Player 2)" << endl;

    cout << "\nPress [ENTER] READY | START";
    getchar();
    system("cls");

    setup();

    while (!gameOver())
    {
        if (!value())
        {
            continue;
        }
    }

   if (token == 'x' && !tie)
{
    system("Color 02");
    cout << n2 << " WINS!!" << endl;
}
else if (token == '0' && !tie)
{
	system("Color 02");
    cout << n1 << " WINS!!" << endl;
      
}
else
{
	system("Color 04");
    cout << "D R A W!!" << endl;

}

}

void appColor()
{
    system("Color 06");
    cout << endl;
    for (int i = 1; i < 31; i++)
    {
        cout << char(223);
    }
    cout << char(219) << "       T I C  T A C  T O E      " << char(219);

    for (int j = 1; j < 31; j++)
    {
        cout << char(223);
    }
    cout << endl;
    cout << endl;
    cout << endl;
}
void frame() {
    int i, j = 79;
	system("color 02");
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
void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
