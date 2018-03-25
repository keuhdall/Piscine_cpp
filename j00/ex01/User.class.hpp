#ifndef USER_CLASS_HPP
# define USER_CLASS_HPP

#include <iostream>
#include <string.h>

class User {
    public:
        User();
        ~User();
        void setFirstname(std::string firstname);
        void setLastname(std::string lastname);
        void setNickname(std::string nickname);
        void setLogin(std::string login);
        void setPostal(std::string postal);
        void setEmail(std::string email);
        void setNum(std::string num);
        void setBirthday(std::string birthday);
        void setFavMeal(std::string favMeal);
        void setUnderwearColor(std::string underwearColor);
        void setDarkestSecret(std::string darkestSecret);
        std::string getFirstname();
        std::string getLastname();
        std::string getNickname();
        std::string getLogin();
        std::string getPostal();
        std::string getEmail();
        std::string getNum();
        std::string getBirthday();
        std::string getFavMeal();
        std::string getUnderwearColor();
        std::string getDarkestSecret();
        static int getUserCount();
        static void incrUserCount();
    private:
        static int _userCount;
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _login;
        std::string _postal;
        std::string _email;
        std::string _num;
        std::string _birthday;
        std::string _favMeal;
        std::string _underwearColor;
        std::string _darkestSecret;
};

#endif