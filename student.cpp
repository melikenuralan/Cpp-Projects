#include<iostream>
#include<conio.h>
using namespace std;

int i=0;
void choiceHandle();
void insert();
void search();
void update();
void del();
void display();

struct Student{
	
	int id;
	float marks,per;
	string name,grade;
		
}; Student s[25];

void insert(){
	system("cls");

cout<<"\n\n\t\t\t *** INSERT RECORD ***"<<endl<<endl;



cout<<char(175)<<" Student [id] ->";
cin>>s[i].id;



cout<<endl<<endl;

cout<<char(175)<<" Student [name] ->";
cin>>s[i].name;


cout<<endl<<endl;


cout<<char(175)<<" Student [marks] ->";
cin>>s[i].marks;
s[i].per = s[i].marks / 100*100;


if(s[i].per >= 85){
	s[i].grade = "A+";
}

else if(s[i].per >= 75){
	s[i].grade = "A";
}

else if(s[i].per >= 65){
	s[i].grade = "B+";
}

else if(s[i].per >= 55){
	s[i].grade = "B";
}

else if(s[i].per >= 50){
	s[i].grade = "C";
}

else if(s[i].per >= 45){
	s[i].grade = "D";	

}
else if(s[i].per >= 33){
	s[i].grade = "E";
}

else{
	s[i].grade = "F";

}

i++;
cout<<"\n\n *** INSERTED RECORD SUCCEFULLY ***";

}

void search(){
	 system("cls");
	 
	int id,found = 0;
	 cout<<"\n\n\t\t\t *** SEARCH RECORD ***";
	 
	 
	 if(i==0){
	 	cout<<"\n\n *** No Record Found ***";
	 }
	 
	 else{
	 	cout<<"\n\n"<<char(175)<<" Enter Student Id";
	 	cin>>id;
	 }
	 
	 for(int a=0;a<i;a++){
	 	if(id == s[a].id){
	 		cout<<"\n\n"<<char(175)<<" Student Name : "<<s[a].name;
	 		cout<<"\n\n"<<char(175)<<" Student Marks : "<<s[a].marks;
	 		cout<<"\n\n"<<char(175)<<" Student Percentage : "<<s[a].per<<"%";
	 		cout<<"\n\n"<<char(175)<<" Student Grade : "<<s[a].grade;
	 		found++;
		 }
	 }
	 
	 if(found==0){
	 	cout<<"\n\n *** Student Id Not Found ***";
	 }
}


void update(){
	 system("cls");
	 int id,found = 0;
	 cout<<"\n\n\t\t\t *** U P D A T E   R E C O R D  ***";
	 
	 
	 if(i==0){
	 	cout<<"\n\n *** No Record Found ***";
	 }
	 
	 else{
	 	
	 	cout<<"\n\n Enter Student Id";
	 	cin>>id;
	 }
	 
for(int a=0;a<i;a++){
	
if(id == s[a].id){
	
	
cout<<char(175)<<"\n\n"<<char(175)<<" Student [name]";
cin>>s[a].name;

cout<<char(175)<<"\n\n"<<char(175)<<" Student [marks]";
cin>>s[a].marks;

s[a].per = s[i].marks / 100*100;


if(s[a].per >= 85){
	s[a].grade = "A+";
}
else if(s[a].per >= 75){
	s[a].grade = "A";
}
else if(s[a].per >= 65){
	s[a].grade = "B+";
}
else if(s[a].per >= 55){
	s[a].grade = "B";
}
else if(s[a].per >= 50){
	s[a].grade = "C";
}
else if(s[a].per >= 45){
	s[a].grade = "D";
	
}
else if(s[a].per >= 33){
	s[a].grade = "E";
}
else{
	s[a].grade = "F";
}

cout<<"\n\n *** UPDATED RECORD SUCCESFULLY *** ";
	 		found++;
		 }
	 }
	 
	 if(found==0){
	 	cout<<"\n\n *** Student Id Not Found ***";
	 }
}
void del(){
	
	 system("cls");
	 	int id,found=0;
	 cout<<"\n\n\t\t\t *** D E L E T E  R E C O R D  ***";
	 
	 
	 if(i==0){
	 	cout<<"\n\n *** No Record Found ***";
	 }
	 
	 else{
	 
	 	cout<<"\n\n"<<char(175)<<" Enter Student Id";
	 	cin>>id;
	 	
	 }
	 for(int a=0;a<i;a++){
	 	
	 		if(id==s[a].id){
	 			
	 			for(int m=a;m<i-1;m++){
	 				
	 				s[m].id = s[m+1].id;
	 				s[m].name = s[m+1].name;
	 				s[m].marks = s[m+1].marks;
	 				s[m].per = s[m+1].per;
	 				s[m].grade = s[m+1].grade;
	 				
	 				
				 }
				cout<<"\n\n *** Delete Record Succesfully ***";
	 			found++;
	 			i--;
	 			break;
			 }
	 }
	  if(found==0){
	 	cout<<"\n\n *** Student Id Not Found ***";
	 }
	 
		
}
void display(){
	
	system("cls");
	cout<<"\n\n\t\t\t *** D I S P L A Y  R E C O R D S ***";
	if(i==0){
		cout<<"\n\n *** No Record Found *** ";
		
	}
	else{
		for(int a=0;a<i;a++){
			cout<<"\n\n"<<char(175)<<" Student Id : "<<s[a].id;
			cout<<"\n\n"<<char(175)<<" Student Name : "<<s[a].name;
			cout<<"\n\n"<<char(175)<<" Student Marks : "<<s[a].marks;
			cout<<"\n\n"<<char(175)<<" Student Percentage : "<<s[a].per;
			cout<<"\n\n"<<char(175)<<" Student Grade : "<<s[a].grade;
			cout<<"\n\n . . . . . . . . . . . . . . . . . . . ";
		}

	}
}

void choiceHandle(){
		menu:
		system("Color 04");
		system("cls");
	int choice;
		cout<<"\n\n\t\t\t*** STUDENT MANAGEMENT SYSTEM ***";
		cout<<"\n\n 1. INSERT RECORD";
		cout<<"\n\n 2. SEARCH RECORD";
		cout<<"\n\n 3. UPDATE RECORD";
		cout<<"\n\n 4. DELETE RECORD";
		cout<<"\n\n 5. DISPLAY RECORD";
		cout<<"\n\n 6. EXIT";
		cout<<"\n\n ENTER YOUR CHOICE -> ";
		cin>>choice;
		switch(choice){
			case 1: insert();
				break;
			case 2: search();
				break;
			case 3: update();
				break;
			case 4: del();
				break;
			case 5: display();
				break;
			case 6:
				exit(0);
			break;
			
		default: cout<<"\n\n\n**invalid choice !!***";
			break;
		}
		getch();
		goto menu;
	
	
}
int main(){

	choiceHandle();
}
