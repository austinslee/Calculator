#ifndef SUB_H
#define SUB_H

#include "base.hpp"

class Sub : public Base
{
    public:
        Sub(Base*,Base*);
        double evaluate();
        std::string stringify();
        Base* left;
        Base* right;
};

#endif