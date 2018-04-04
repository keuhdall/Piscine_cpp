#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

class Base {
    public:
        Base();
        Base(Base const & src);
        virtual ~Base();
        Base & operator=(Base const & rhs);
};

#endif