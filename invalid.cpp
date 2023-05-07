#include <iostream>
#include <string>
using namespace std;
int main()

{
    //string emailID = "jithesh_123.kk@gmail.com";
    string emailID = "jithesh#%$&*()@gmail.com";

    int username_valid = 1;

    // Find the index of '@' using 'find()' function

    int index = emailID.find('@');
 

    // To get the username, take all the characters till the '@' symbol, using 'substr()' function

    string username = emailID.substr(0, index);
 

    // Display the email address & the extracted username.

    cout << "Email ID is: " << emailID << endl;

    cout << "Username is: " << username << endl;

   

    // Check whether username is valid or not.

    /* ASCII codes

        46              -->     . (dot)

        48 to 57        -->     0 to 9

        95              -->     _ (underscore)

        65 to 90        -->     A to Z (upper case)

        97 to 122       -->     a to z (lower case)

   

    */

    for (int i = 0; username[i] != '\0'; i++){

       

        if (username[i] == 46 || (username[i] > 47 && username[i] < 58) ||

        username[i] == 95 || (username[i] > 64 && username[i] < 91) ||

        (username[i] > 96 && username[i] < 123)){

           

            continue;

        }

        else{

            username_valid = 0;

            break;

        }

    }

   

    if (username_valid)

        cout << "Username: '" << username << "' is valid." << endl;

    else

        cout << "Username: '" << username << "' is invalid." << endl;

   

    return 0;

}
