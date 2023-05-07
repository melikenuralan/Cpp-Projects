#include<iostream> //Basic calculator
using namespace std;
const int PI=3;

int area(int l,int b,int r,int shape)
{
	int result=0;
	switch(shape)
		{
			case 1: result=(l*b)/2;
				break;
			case 2: result=l*b;
				break;
			case 3: result=PI*r*r;
				break;
			default:
				cout<<"Invalid operator please try again ";
				
	}
	return result;
}

int perimeter(int l,int b,int r,int shape2)
{
	
	int result=0;
	
		switch(shape2)
		{
			case 1: result=2*(l+b);
				break;
				
			case 2: result=2*PI*r;
				break;
				
			default:"Invalid operator please try again ";
				
		}
	
}
int SumofTerms(int s)
{
	
	int sum=0;
	for(int i=1;i<=s;i++)
	{
		sum=sum+i;

	}
	return sum;
}
int Fact(int s)
{
	int fact=1;
	
	for(int i=1;i<=s;i++)
	{
		fact=fact*i;
	}
	return fact;
}



int main()
{
	int choice=0,shape1=0,shape2=0;
	
	int l1,b1,r1,result1;
	int l2,b2,r2,result2,result3,result4;
	int value,value2;
	
	cout<<"Hello choose the process : ";
	cout<<endl<<"1.AREA"<<endl<<"2.PERIMETER"<<endl<<"3.SUM OF TERMS"<<endl<<"4.FACTORIAL"<<endl;
	cin>>choice;
	
	switch(choice)
	{
case 1: 
		
	cout<<"choose shape to find area "<<endl;
	cout<<"1.TRIANGLE"<<endl;
	cout<<"2.SQUARE"<<endl;
	cout<<"3.CIRCLE"<<endl;
	cin>>shape1;
	if(shape1!=3)
	{
	cout<<"Enter length and breadth :";
	cin>>l1>>b1;
	}else
	{
	cout<<"Enter radius of circle : ";
	cin>>r1;
	}
		result1=area(l1,b1,r1,shape1);  
		cout<<"area is "<<result1<<endl;
			break;
			
case 2: 
	
	cout<<"choose to find perimeter "<<endl<<"1.SQUARE"<<endl<<"2.CIRCLE"<<endl;
	cin>>shape2;
	
	if(shape2==1)
	{
	cout<<"Enter length and breadth :";
	cin>>l2>>b2;
	}else
	{
	cout<<"Enter radius of circle : ";
	cin>>r2;
	}
		result2=perimeter(l2,b2,r2,shape2);  
		cout<<"perimeter is "<<result2<<endl;
			break;			

case 3: cout<<"enter a value"<<endl;
		cin>>value;
		result3=SumofTerms(value);
		cout<<"sum of no is : "<<result3;
			break;
			
		case 4:cout<<"enter a value"<<endl;
		cin>>value2;
		result4=Fact(value2);
		cout<<"factorial of number is : "<<result4;
			break;

		default: cout<<"invalid process try again ! ";

			
	}
	
	return 0;
}
