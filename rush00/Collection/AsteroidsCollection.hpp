#ifndef ASTEROIDSCOLLECTION_CPP
# define ASTEROIDSCOLLECTION_CPP

# include "ACollection.hpp"
# include "../Object/Asteroid.hpp"

class AsteroidsCollection: public ACollection
{
    public:
        AsteroidsCollection(void);
        AsteroidsCollection(const AsteroidsCollection &copy);
        AsteroidsCollection &operator=(const AsteroidsCollection &copy);
        ~AsteroidsCollection(void);
        void updateObjects(void);

};

#endif
