#include<iostream>
using namespace std;

int isPerfect(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(2*n==sum)
	
		cout<<"perfect ";
	else
		cout<<"not perfect";
	
	return n;
	
}

int isPrime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	cout<<"prime";
	else
	cout<<"not prime";
	return n;
}
isArmstrong(int n)
{
	int r;
	int store,sum=0;
	store=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	if(sum==store)  cout<<"armstong";
	else            cout<<"not armstrong";
	
	return n;
}
int main()
{
	int value,value2,value3,rslt,strong,prime;
	int choice;
	cout<<"1.Perfect number "<<endl;
	cout<<"2.Prime number "<<endl;
	cout<<"3.Armstong number "<<endl;
	cin>>choice;
switch(choice)
{
	case 1: 	cout<<"enter a value \n";
				cin>>value;
				
		rslt=isPerfect(value);
	break;
	
	case 2: 	cout<<"enter a value \n";
				cin>>value2;
	
		prime=isPrime(value2);
	break;

	case 3:     cout<<"enter a value \n";
			    cin>>value3;
		strong=isArmstrong(value3);		
	break;	

default: cout<<"invalid option! ";
}
	

	return 0;
}
