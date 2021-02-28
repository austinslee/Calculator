#ifndef DIV_H
#define DIV_H

#include "base.hpp"

class Div : public Base
{
    public:
        Div(Base*,Base*);
        double evaluate();
        std::string stringify();
        Base* left;
        Base* right;
};

#endif