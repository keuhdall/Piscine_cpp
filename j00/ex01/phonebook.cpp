#include <iostream>
#include <string.h>
#include "User.class.hpp"

void handleAdd(User users[8]) {
    std::string tmpString[11];
    User::incrUserCount();
    if (User::getUserCount() <= 8) {
        std::cout << "The phonebook is full ! You should have used it more wisely, now deal with it." << std::endl;
        return;
    }
    std::cout << "Firstname : " << std::endl;
    std::cin >> tmpString[0];
    std::cout << "Lastname : " << std::endl;
    std::cin >> tmpString[1];
    std::cout << "Nickname : " << std::endl;
    std::cin >> tmpString[2];
    std::cout << "Login : " << std::endl;
    std::cin >> tmpString[3];
    std::cout << "Postal Address : " << std::endl;
    std::cin >> tmpString[4];
    std::cout << "Email : " << std::endl;
    std::cin >> tmpString[5];
    std::cout << "Phone Number : " << std::endl;
    std::cin >> tmpString[6];
    std::cout << "Birthday : " << std::endl;
    std::cin >> tmpString[7];
    std::cout << "Favorite Meal : " << std::endl;
    std::cin >> tmpString[8];
    std::cout << "Underwear Color : " << std::endl;
    std::cin >> tmpString[9];
    std::cout << "Darkest Secret : " << std::endl;
    std::cin >> tmpString[10];
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
}

void handleSearch(User users[8]) {
    if (User::getUserCount() == 0) {
        std::cout << "No users currently registered in the phonebook." << std::endl;
        return;
    }
    for (int i = 0; i < User::getUserCount() - 1; i++) {
        std::cout << "Firstname : " << users[i].getFirstname() << std::endl;
    }
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
        std::cin >> input;
        handleInput(input, users);
    }
    return 0;
}