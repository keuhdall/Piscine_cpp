#include "User.class.hpp"

int User::_userCount = 0;

User::User() {
}

User::~User() {
}

void User::setFirstname(std::string firstname) {
    this->_firstname = firstname;
}

void User::setLastname(std::string lastname) {
    this->_lastname = lastname;
}

void User::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

void User::setLogin(std::string login) {
    this->_login = login;
}

void User::setPostal(std::string postal) {
    this->_postal = postal;
}

void User::setEmail(std::string email) {
    this->_email = email;
}

void User::setNum(std::string num) {
    this->_num = num;
}

void User::setBirthday(std::string birthday) {
    this->_birthday = birthday;
}

void User::setFavMeal(std::string favMeal) {
    this->_favMeal = favMeal;
}

void User::setUnderwearColor(std::string underwearColor) {
    this->_underwearColor = underwearColor;
}

void User::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

static void User::incrUserCount() {
    _userCount++;
}

std::string User::getFirstname() {
    return this->_firstname;
}

std::string User::getLastname() {
    return this->_lastname;
}

std::string User::getNickname() {
    return this->_nickname;
}

std::string User::getLogin() {
    return this->_login;
}

std::string User::getPostal() {
    return this->_postal;
}

std::string User::getEmail() {
    return this->_email;
}

std::string User::getNum() {
    return this->_num;
}

std::string User::getBirthday() {
    return this->_birthday;
}

std::string User::getFavMeal() {
    return this->_favMeal;
}

std::string User::getUnderwearColor() {
    return this->_underwearColor;
}

std::string User::getDarkestSecret() {
    return this->_darkestSecret;
}

int User::getUserCount() {
    return _userCount;
}