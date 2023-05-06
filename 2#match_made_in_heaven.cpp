#include<iostream>

typedef int count;

int main()
{
	std::string str1,str2;
	count name1=0,name2=0,Love=0;
	
	std::cout<<"enter your name and surname : ";
	std::getline(std::cin,str1);
	
	std::cout<<"enter your love's name and surname : ";
	std::getline(std::cin,str2);
	
	for(int i=0;str1[i]!='\0';i++){
		
			if(str1[i]!=' '){
				
					name1++;
					
			}
	} 
	
	for(int i=0;str2[i]!='\0';i++)
	{
			if(str2[i]!=' '){
				
					name2++;
					
			}
	}
	Love=name1+name2;
	std::cout<<"your love point is : "<<Love;
	
	if(Love>10)
	{
		std::cout<<std::endl<<"congratulations !! you are eligible to get married. ";
	}
	else{
		std::cout<<std::endl<<"I'm sorry,you don't have enough points to get married !!";
	}
	
	return 0;
}
