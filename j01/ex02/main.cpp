#include "ZombieEvent.class.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(0));
    ZombieEvent WalkingZombiesFactory;
    ZombieEvent RunningZombiesFactory;
    ZombieEvent CrawlingZombiesFactory;
    RunningZombiesFactory.setZombieType("Running zombie");
    CrawlingZombiesFactory.setZombieType("Crawling zombie");
    Zombie *Richard = WalkingZombiesFactory.newZombie("Richard");
    Zombie *tmpZombie;
    Richard->announce();
    delete Richard;
    for (int i = 0; i < 10; i++) {
        tmpZombie = RunningZombiesFactory.randomChump();
        delete tmpZombie;
    }
    for (int i = 0; i < 10; i++) {
        tmpZombie = CrawlingZombiesFactory.randomChump();
        delete tmpZombie;
    }
    return 0;
}