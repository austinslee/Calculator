#ifndef SUB_H
#define SUB_H

#include "base.hpp"

class Sub : public Base
{
    public:
	Base* left;
	Base* right;
        Sub(Base*,Base*);
        double evaluate();
	~Sub() {
		delete left;
		delete right;
	}
        std::string stringify();
};

#endif
