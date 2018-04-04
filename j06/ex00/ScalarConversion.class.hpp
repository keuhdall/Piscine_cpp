#ifndef SCALARCONVERSION_CLASS_HPP
# define SCALARCONVERSION_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>

class ScalarConversion {
    public:
        ScalarConversion();
        ScalarConversion(std::string const value);
        ScalarConversion(ScalarConversion const & src);
        virtual ~ScalarConversion();
        ScalarConversion & operator=(ScalarConversion const & rhs);
        void displayChar(void);
        void displayInt(void);
        void displayFloat(void);
        void displayDouble(void);


    private:
        std::string const _value;
};

#endif