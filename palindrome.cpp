#include<iostream>

using namespace std;

int main()

{

int i,j;

string str="Madam";

string rev="";

int len=(int)str.length();

rev.resize(len);

for(i=0, j=len-1; i<len; j--, i++)

{

if(str[j]>=65 && str[j]<=90) // if there is a Capital letters, change it to small letter

str[j]=str[j]+32;

rev[i]=str[j];

}

rev[len]='\0';

if(str.compare(rev)==0 || str.compare(rev)==32 || str.compare(rev)== -32)

cout<<"palindrome"<<endl;

else

cout<<"not a pallindrome"<<endl;

return 0;

}
