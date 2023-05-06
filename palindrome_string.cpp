#include <iostream>
#include <string>

int main()
{
bool gameOver = false;
	
	std::string str;
	std::string str2;
	while(!gameOver)
	{
		
	std::cout<<"enter a word and see if it's palindrome or not : "<<std::endl;
	std::getline(std::cin,str);
	std::string::reverse_iterator it;
	
	for(it = str.rbegin() ; it!=str.rend();it++)
	{
		str2+=*it;
	}
	if(str == str2){
		
		std::cout<<"palindrome";
	}
	
	else{
		
		std::cout<<"not palindrome";
	}
		std::string option;
        std::cout <<std::endl<< "Do you want to continue? (yes/no): ";
        std::getline(std::cin, option);

        if (option != "yes" && option != "y") //user enter yes or y 
        {
            gameOver = true;
        }
}
	
	return 0;
}
