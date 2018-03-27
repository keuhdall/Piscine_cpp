#include <iostream>
#include <string.h>
#include "User.class.hpp"

void handleAdd(User users[8]) {
    std::string tmpString[11];
    User::incrUserCount();
    if (User::getUserCount() >= 8) {
        std::cout << "The phonebook is full ! You should have used it more wisely, now deal with it." << std::endl;
        return;
    }
    std::cout << "Firstname : " << std::endl;
    std::getline(std::cin, tmpString[0]);
    std::cout << "Lastname : " << std::endl;
    std::getline(std::cin, tmpString[1]);
    std::cout << "Nickname : " << std::endl;
    std::getline(std::cin, tmpString[2]);
    std::cout << "Login : " << std::endl;
    std::getline(std::cin, tmpString[3]);
    std::cout << "Postal Address : " << std::endl;
    std::getline(std::cin, tmpString[4]);
    std::cout << "Email : " << std::endl;
    std::getline(std::cin, tmpString[5]);
    std::cout << "Phone Number : " << std::endl;
    std::getline(std::cin, tmpString[6]);
    std::cout << "Birthday : " << std::endl;
    std::getline(std::cin, tmpString[7]);
    std::cout << "Favorite Meal : " << std::endl;
    std::getline(std::cin, tmpString[8]);
    std::cout << "Underwear Color : " << std::endl;
    std::getline(std::cin, tmpString[9]);
    std::cout << "Darkest Secret : " << std::endl;
    std::getline(std::cin, tmpString[10]);
    users[User::getUserCount() - 1].setFirstname(tmpString[0]);
    users[User::getUserCount() - 1].setLastname(tmpString[1]);
    users[User::getUserCount() - 1].setNickname(tmpString[2]);
    users[User::getUserCount() - 1].setLogin(tmpString[3]);
    users[User::getUserCount() - 1].setPostal(tmpString[4]);
    users[User::getUserCount() - 1].setEmail(tmpString[5]);
    users[User::getUserCount() - 1].setNum(tmpString[6]);
    users[User::getUserCount() - 1].setBirthday(tmpString[7]);
    users[User::getUserCount() - 1].setFavMeal(tmpString[8]);
    users[User::getUserCount() - 1].setUnderwearColor(tmpString[9]);
    users[User::getUserCount() - 1].setDarkestSecret(tmpString[10]);
    std::cout << std::endl;
}

std::string formatString(std::string s) {
    std::string tmpString = "";
    if (s.size() > 10) {
        tmpString = s.substr(0, 9);
        tmpString += ".";
        return tmpString;
    } else if (s.size() < 10) {
        for (int i = s.size(); i < 10; i++) {
            tmpString += " ";
        }
        s = tmpString + s;
    }
    return s;
}

void displayAllUsers(User users[8]) {
    std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << std::endl;
    for (int i = 0; i < User::getUserCount(); i++) {
        std::cout << "|" << formatString(std::to_string(i + 1)) << "|" << formatString(users[i].getFirstname()) << "|" << formatString(users[i].getLastname()) << "|" << formatString(users[i].getNickname()) << "|" << std::endl;
    }
    std::cout << std::endl;
}

bool is_digits(std::string str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void handleSearch(User users[8]) {
    std::string index;
    if (User::getUserCount() == 0) {
        std::cout << "No users currently registered in the phonebook." << std::endl;
        return;
    }
    displayAllUsers(users);
    std::cout << "Enter the index of the profile you want to display." << std::endl;
    if (!std::getline(std::cin, index))
        exit(1);
    if (!is_digits(index)) {
        std::cerr << "Error : the input was not a number." << std::endl;
        return;
    } else if (std::stoi(index) - 1 < 0 || std::stoi(index) > User::getUserCount()) {
        std::cerr << "Error : this user does not exist." << std::endl;
        return;
    }
    std::cout << "Firstname : "       << users[std::stoi(index) - 1].getFirstname()      << std::endl;
    std::cout << "Lastname : "        << users[std::stoi(index) - 1].getLastname()       << std::endl;
    std::cout << "Nickname : "        << users[std::stoi(index) - 1].getNickname()       << std::endl;
    std::cout << "Login : "           << users[std::stoi(index) - 1].getLogin()          << std::endl;
    std::cout << "Postal : "          << users[std::stoi(index) - 1].getPostal()         << std::endl;
    std::cout << "Email : "           << users[std::stoi(index) - 1].getEmail()          << std::endl;
    std::cout << "Phone number : "    << users[std::stoi(index) - 1].getNum()            << std::endl;
    std::cout << "Birthday : "        << users[std::stoi(index) - 1].getBirthday()       << std::endl;
    std::cout << "Favorite Meal : "   << users[std::stoi(index) - 1].getFavMeal()        << std::endl;
    std::cout << "Underwear color : " << users[std::stoi(index) - 1].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : "  << users[std::stoi(index) - 1].getDarkestSecret()  << std::endl;
    std::cout << std::endl;
}

void handleInput(std::string input, User users[8]) {
    if (!input.compare("ADD")) {
        handleAdd(users);
    } else if (!input.compare("SEARCH")) {
        handleSearch(users);
    } else if (!input.compare("EXIT")) {
        std::cout << "Bye bye <3" << std::endl;
        exit(1);
    } else {
        std::cout << "Unknown command." << std::endl;
    }
}

int main(void) {
    std::string input;
    User users[8];
    while (1) {
        std::cout << "Please enter a command." << std::endl;
        if (!std::getline(std::cin, input))
            exit(1);
        handleInput(input, users);
    }
    return 0;
}