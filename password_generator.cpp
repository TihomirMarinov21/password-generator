#include <iostream>
#include <cstdlib>
#include <limits>

// declaration field
const char letters[52] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
};

const char numbers[10] = {
    '1','2','3',
    '4','5','6',
    '7','8','9',
    '0'
};

const char signs[8] = {
    '!','@','$','%','^','&','*','-'
};

int length = 0;
int amount = 0;

// function that creats a password, if the password is long enough we have at least 2 characters, 1 sign and else numbers
std::string createpassword(int length){

    if(length < 6){
        std::string password = "";
        for(int l = 0; l < length; l++){
            int choice_number = rand() % 10;
            password += numbers[choice_number];
        } return password;
    }

    else{
    std::string password = "";
    for (int i = 0; i < length; i++){
        if(i < 2){
            int choice_letter = rand() % 52;
            password += letters[choice_letter];
        }
        else if(i < 3){
            int choice_sign = rand() % 8;
            password += signs[choice_sign];
        }
        else {
            int choice_number = rand() % 10;
            password += numbers[choice_number];
        }
    }
    return password;
    }
}

int main(){

std::cout << "*********Let's generate a password*********\n";
std::cout << "How long should your password be? If less then 6 password will be numbers only! ";
while(!(std::cin>> length)){ // checks if the user input is valid
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a valid number! \n";
}
std::cout << "How many passwords do you need? (1 is the minimum) ";
while(!(std::cin>> amount)){ // also checks the user input
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a valid number! \n";
}

for(int i = 0; i < amount; i++){
    std::string password = createpassword(length);
    std::cout << "Password #" << i + 1 <<": " << password << "\n"; // displays the created password and uses the index of the loop to numerate the passwords
}

std::cout << "*********Thank you and enjoy your password/s*********";
return 0;
}