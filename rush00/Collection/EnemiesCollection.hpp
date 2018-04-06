#ifndef ENEMIESCOLLECTION_CPP
# define ENEMIESCOLLECTION_CPP

# include "ACollection.hpp"
# include "../Object/Enemy.hpp"
# include "EnRockCollection.hpp"
# include "../Object/Pilot.hpp"

class EnemiesCollection: public ACollection
{
    public:
        EnemiesCollection(void);
        EnemiesCollection(const EnemiesCollection &copy);
        EnemiesCollection &operator=(const EnemiesCollection &copy);
        ~EnemiesCollection(void);
        void updateObjects(void);
		void maybeShoot(EnRockCollection &e_rockets);
		bool checkCollision(Pilot *pilot, int *score);
};

#endif
