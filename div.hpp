#ifndef DIV_H
#define DIV_H

#include "base.hpp"

class Div : public Base
{
    public:
	Base* left;
	Base* right;
        Div(Base*,Base*);
	~Div() {
		delete left;
		delete right;
	}
        double evaluate();
        std::string stringify();
};

#endif
