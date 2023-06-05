#include<iostream>
#include <random>
#include<ctime>
using namespace std;

int Q_num = 1;
int correct = 0;
int wrong = 0;

bool ask[10] = { true,true,true,true,true,true,true,true,true,true };
void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();
int main()
{
	display();
	return 0;
}

void display()
{
	system("cls");
	cout << "Question Number : " << Q_num << "\t\tCorrect Answer : " << correct << "\t\tWrong Answers : " << wrong << endl << endl;
	display_random_question();
}

void display_random_question()
{
	srand(time(0));
	bool is_question_remaining = false;
	for (int i = 0; i < 10; i++) {
		if (ask[i]) {
			is_question_remaining = true;
			break;
		}

	}
	while (is_question_remaining)
	{
		int no = rand() % 10;
		if (ask[no]) {
			ask[no] = false;
			switch (no) {
			case 0:
				question("Ataturk nerede dogmustur?", "Istanbul", "Selanik", "Ankara", "Izmir", 'b');
				break;
			case 1:
				question("Ataturk'un annesinin adi nedir?", "Zubeyde Hanim", "Ayse Hanim", "Fatma Hanim", "Emine Hanim", 'a');
				break;
			case 2:
				question("Ataturk 19 Mayis 1919'da hangi sehrimize ayak basmistir?", " Istanbul", "Ankara", "Izmir", "Samsun", 'd');
				break;
			case 3:
				question("Ataturk'un kiz kardesinin adi nedir?", "Makbule", "Fatma", "Ayse", "Zehra", 'a');
				break;
			case 4:
				question("Ataturk'un babasinin adi nedir?", "Mustafa Efendi", " Haci Mehmet Efendi", "Ali Riza Bey", "Ahmet Bey", 'c');
				break;
			case 5:
				question("Ataturk'un dogdugu sehir simdi hangi ulkededir?", "Bulgaristan", "Yunanistan", "Bulgaristan", "Turkiye", 'b');
				break;
			case 6:
				question("Yurdumuzu dusmanlardan kurtarmak için yaptigimiz savasin adi nedir? ", "Canakkale Savasi", "Balkan Savasi", "Birinci Dunya Savasi", "Kurtulus Savasi", 'd');
				break;
			case 7:
				question("TBMM kac yılında acilmistir ? ", "23 Nisan 1920", "18 haziran 1923", "19 mayis 1920", "22 Nisan 1919", 'a');
				break;
			case 8:
				question("Cumhuriyetin kabulu?", "19 kasim 1921", "20 nisan 1920", "29 Ekim 1923", "5 Ekim 1917", 'c');
				break;
			case 9:
				question("Ataturk'un samsun'a cikisi ?", "19 OCAK 1918", "19 TEMMUZ 1919", "19 MAYIS 1920", "19 MAYIS 1919", 'd');
				break;


			}
		}
	}
	result();
}

void result()
{
	system("cls");
	cout << "Total Question = " << Q_num - 1 << endl;
	cout << "Correct Answers = " << correct << endl;
	cout << "Wrong Answers = " << wrong << endl;

	if (correct > wrong)
		cout << "Result = PASS" << endl;
	else if (wrong > correct)
		cout << "Result = FAIL " << endl;
	else
		cout << "Result = TIE " << endl;
}
void question(string question, string a, string b, string c, string d, char correct_answer)
{
	cout << question << endl;
	cout << "A.\t" << a << endl;
	cout << "B.\t" << b << endl;
	cout << "C.\t" << c << endl;
	cout << "D.\t" << d << endl;
	char answer;
	cin >> answer;
	if (answer == correct_answer)
		correct++;
	else
		wrong++;
	Q_num++;

	display();

}

