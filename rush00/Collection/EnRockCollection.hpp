#ifndef ENROCKCOLLECTION_HPP
# define ENROCKCOLLECTION_HPP

# include "ACollection.hpp"
# include "../Object/Rocket.hpp"
# include "../Object/Pilot.hpp"

class EnRockCollection: public ACollection
{
    public:
        EnRockCollection(void);
        EnRockCollection(const EnRockCollection &copy);
        EnRockCollection &operator=(const EnRockCollection &copy);
        ~EnRockCollection(void);
        void updateObjects(int maxHeight);
		void fire(int y, int x);
		bool checkCollision(Pilot *pilot);
};

#endif
