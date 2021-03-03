#ifndef ADD_H
#define ADD_H

#include "base.hpp"

class Add : public Base
{
    public:
        Add(Base*, Base*);
	~Add() { 
		delete left;
		delete right;
	}
        double evaluate();
        std::string stringify();
        Base* left;
        Base* right;
        
};

#endif
