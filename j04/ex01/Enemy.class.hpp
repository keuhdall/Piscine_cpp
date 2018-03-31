#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <iostream>
#include <string>

class Enemy
{
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        virtual ~Enemy();
        Enemy & operator=(Enemy const & rhs);
        std::string const & getType() const;
        int getHP() const;
        virtual void takeDamage(int);

    protected:
        int _hp;
        std::string _type;
};

#endif