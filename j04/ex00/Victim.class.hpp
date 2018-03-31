#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

class Victim {
    public:
        Victim();
        Victim(Victim const & src);
        ~Victim();
        Victim & operator=(Victim const & rhs);
};

#endif