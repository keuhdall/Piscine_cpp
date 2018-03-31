#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "AObject.hpp"

class Asteroid: public AObject
{
	public:
		Asteroid(void);
		Asteroid(const Asteroid & src);
		Asteroid &operator=(const Asteroid & rhs);
		~Asteroid(void);
		void move(void);
		char    getShape(int nb) const;
        char	shape[4];

};

#endif
